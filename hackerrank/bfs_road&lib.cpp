#include<iostream>
#include<vector>
#include<queue>
#include<utility>
using namespace std;

#define ll long long


int count=0;

int main(){
	int test;
	cin>>test;
	while(test--){
		int vertex,pos_edge,road,lib;

		cin>>vertex>>pos_edge>>lib>>road;

		vector<vector< int> >edge(vertex+1);
		vector<int> visited(vertex+1);
		queue<int> q;
		

		int x,y;

		while(pos_edge--){

			cin>>x>>y;
			edge[x].push_back(y);
			edge[y].push_back(x);		
		
		}

		int edge_count=0;
		int lib_count=0;

		for(int i=1;i<=vertex;i++){
			if(visited[i]!=1){

				q.push(i);

				while(q.size()){
				
					int x=q.front();
					q.pop();
					visited[x]=1;

						for(int j=0;j<edge[x].size();j++){
							if(visited[edge[x][j]] != 1){

								q.push(edge[x][j]);
								visited[edge[x][j]] = 1;
								edge_count++;

							}
						}
				}
				lib_count++;
			}
		}

		ll price = edge_count * road + lib_count * lib; 
		ll lib_price = vertex * lib;

		if(price < lib_price){
			cout<<price<<endl;
		}
		else{
			cout<<lib_price<<endl;
		}


	}
}