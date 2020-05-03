#include <bits/stdc++.h> 
using namespace std;

int main(){
	int node=6;
	vector <int> map(node,0);
	vector< vector <int> > graph{ {1,4},{2,3},{},{},{5},{} };

	vector<int> row;
	for(int i=0;i<graph.size();i++){
		for(int j=0;j<graph[i].size();j++){
		}
		cout<<endl;
	}

	int first=0;

	map[first]=1;

	row.push_back(0);

		for(int i=0;i<row.size();i++){
			for(int j=0;j<graph[row[i]].size();j++){

				if(map[graph[row[i]][j]]!=1){
					
					row.push_back(graph[row[i]][j]);
					map[graph[row[i]][j]]=1;

				}
			}

		}

		for(int j=0;j<row.size();j++){
			cout<<row[j]<<" ";
		}
		cout<<endl;
	
}