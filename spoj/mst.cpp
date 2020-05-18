#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MAX = 1e4 + 5;

typedef pair< ll, int > lli;
vector< lli > adj[MAX];
vector< int > visited(MAX,0);

void solve(){
	int vertex,edge,x,y;
	ll min_cost = 0,w;
	lli n;

	cin>>vertex>>edge;

	for(int i = 0; i < edge; i++){

		cin>>x>>y>>w;
		adj[x].push_back(make_pair(w,y));
		adj[y].push_back(make_pair(w,x));

	}

	priority_queue < lli, vector< lli >, greater< lli > > q;

	q.push(make_pair(0,1));

	while( !q.empty()){
		n = q.top();
		q.pop();

		int f = n.first;
		int s = n.second;

		if( visited[s] == 1 )
			continue;

		min_cost += f;
		visited[s] = 1;

		for(int i = 0; i < adj[s].size(); i++){
			
			y = adj[s][i].second;
            
            if(visited[y] == 0)
                q.push(adj[s][i]);
		}
	}

	cout<<min_cost<<endl;

}



int main(){
	int test=1;
	//cin>>test;
	while(test--)
		solve();
}
