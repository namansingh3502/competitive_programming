#include <bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	for(int t=0;t<test;t++){

		int row,col,land=0;
		cin>>row>>col;

		vector<vector<char > > cord(row+1,vector<char>(col+1,0));
		vector<vector<int > > visited(row+1,vector<int>(col+1,0));
		queue<pair<int, int> > cords;
		queue<pair<int, int> > cords2;

		for(int i=1;i<=row;i++){
			for(int j=1;j<=col;j++){
				cin>>cord[i][j];
				
				if(cord[i][j]=='#'){
					cords.push(make_pair(i,j));
		}}}	

		int arr_c[]={1,1,1,0,-1,-1,-1,0};
		int arr_r[]={-1,0,1,1,1,0,-1,-1};

		while(cords.size()){
			int r,c;
			pair<int, int> node = cords.front();
			cords.pop();
			r=node.first;
			c=node.second;
			
			if(visited[r][c]!=1){
				visited[r][c]=1;
				land++;
				cords2.push(make_pair(r,c));
				
				while(cords2.size()!=0){
					pair<int, int> node2 = cords2.front();
					r=node2.first;
					c=node2.second;
					
					for(int k=0;k<8;k++){
            			int x = r + arr_r[k];
            			int y = c + arr_c[k];
            			
            			if((0<x && x<=row) && (0<y && y<=col)){
                			
                			if(cord[x][y]=='#' && visited[x][y]!=1){
    	            			cords2.push(make_pair(x,y));
	                			visited[x][y] = 1;
                	}}}
			
					cords2.pop();
		}}}
		cout<<land<<endl;
	}
	return 0;
}
