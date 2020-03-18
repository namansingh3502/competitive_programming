#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n,q,r,c,block=0;
	cin>>n>>q;
	vector< vector < int > > map(3,vector< int > (n+2));	
	for(int i=0;i<q;i++){
		cin>>r>>c;
		int sum_before=0,sum_after=0;
		
		if (r==1){
			sum_before=map[1][c]+map[2][c]+map[2][c-1]+map[2][c+1];
		}
		else{
			sum_before=map[2][c]+map[1][c]+map[1][c-1]+map[1][c+1];
		}

		if(map[r][c]!=0){
			map[r][c]=0;
		}
		else{map[r][c]=1;
		}

		if(map[1][n]==1 && map[2][n+1]==1){	
			cout<<"No"<<endl;block++;
			}
		else if(map[1][2]==1 && map[2][1]==1){
			cout<<"No"<<endl;block++;
			}
		else{
			if (r==1){
				sum_after=map[1][c]+map[2][c]+map[2][c-1]+map[2][c+1];
			}
			else if(r==2){
				sum_after=map[2][c]+map[1][c]+map[1][c-1]+map[1][c+1];
			}
			
			if(sum_after>1 && sum_before<=1){block++;}
			else if(sum_after<=1 && sum_before>1){block--;}
	
			
			if(block!=0){cout<<"No"<<endl;}
			else{ cout<<"Yes"<<endl;}
		}
	}
}
/*5 5
2 3
1 4
2 4
2 3
1 4
*/