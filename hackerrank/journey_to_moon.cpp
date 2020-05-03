#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
	int number,p;
	cin>>number>>p;
	vector< vector<int> > pairs(number);
	vector< int > visited(number,0);
	vector< int > sizes(number,1);
	queue <int> element;

	int x,y;
	for(int i=0;i<p;i++){
		cin>>x>>y;
		pairs[x].push_back(y);
		pairs[y].push_back(x);
	}

	for(int i=0;i<number;i++){
		if(visited[i] != 1){
			int count=1;
			element.push(i);


			while(element.size()){
				int x=element.front();
				element.pop();
				visited[x]=1;
				
				for(int j=0;j<pairs[x].size();j++){
					if(visited[pairs[x][j]] != 1){
						element.push(pairs[x][j]);
						visited[pairs[x][j]] = 1;
						count++;
					}
				}
			}
			sizes[i]=count;	
		}
		else{
			sizes[i]=0;
		}
	}
	
	int ans=0;
	int a=number;
	for(int i=0; i<a; i++){
		number -= sizes[i];
		ans += sizes[i] * number;
	}
	cout<<ans;

}