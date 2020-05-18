#include<bits/stdc++.h>

using namespace std;

#define ll long long;
const int MAX = 1e4 + 5;

typedef pair< int, int > ii;

vector< int > visited(MAX , 0);
vector< ii > adj[MAX];


void solve(){
	int price,nodes,edge,weight,dist=0;
	int w,x,y;

	cin>>price>>nodes>>edge;

	for(int i = 0; i < edge; i++){
		cin>>x>>y>>w;

		adj[x].push_back(make_pair(w,y));
		adj[y].push_back(make_pair(w,x));

	}

	priority_queue<ii, vector< ii >, greater< ii > > q;

	q.push(make_pair(0,1));
	ii n;
	int f,s,m;

	while(!q.empty()){
		n = q.top();
		q.pop();
		
		f = n.first;
		s = n.second;

		if(visited[s] == 1)
			continue;

		visited[s] = 1;
		dist += f;

		for(int i = 0; i < adj[s].size(); i++){
			m = adj[s][i].second;
			if(visited[m] == 0){
				q.push(adj[s][i]);
			}
		}
	}
	dist = dist * price;
	cout<<dist<<endl;
}


int main(){
	int test;
	cin>>test;

	while(test--)
		solve();

	return 0;
}
