
#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<ll, int> lli;
const int MAX = 1e4 + 5;


void solve(){

	vector< lli > adj[MAX];
	vector< ll > current(MAX, MAX);
	vector< int > visited(MAX, 0);
	
	int nodes,edge;
	cin>>nodes>>edge;

	int w,x,y;
	for(int i = 0; i < edge; i++){
		cin>>x>>y>>w;
		
		adj[x].push_back(make_pair(w, y));
	}

	int start,end;
	cin>>start>>end;
	
	priority_queue< lli, vector< lli >, greater< lli > > q;

	q.push(make_pair(0,start));
	current[start] = 0;

	lli m;
	int s,a,b,sum;

	while( !q.empty() ){
		
		m = q.top();
		q.pop();

		s = m.second;

		if(visited[s] == 1 ){
				continue;
			}
		visited[s] = 1;

		for(int i = 0; i < adj[s].size(); i++){
			
			a = adj[s][i].first;
			b = adj[s][i].second;

			sum = current[s] + a;

			if( sum < current[b] ){
				current[b] = sum;
			}

			q.push(make_pair(current[b],b));
		}
	}
	if(current[end] != MAX)
		cout<<current[end]<<endl;
	else
		cout<<"NO"<<endl;
}


int main(){
	int test;
	cin>>test;
	while(test--)
		solve();
}
