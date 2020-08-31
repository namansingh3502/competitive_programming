#include<iostream>
#include<vector>
#include<queue>

using namespace std;

void solve(){
	int n,m,a,b,count=0;
	cin>>n>>m;

	vector< vector< int > > num(n);
	vector< int > visited( n, 0);

	for( int i = 0; i < m; i++ ){
		cin>>a>>b;
		num[a].push_back(b);
		num[b].push_back(a);
	}

	queue< int > q;

	for( int i = 0; i < n; i++ ){
		
		if( visited[ i ] == 1 ) continue;
		q.push( i );

		while( !q.empty() ){

			a = q.front();
			q.pop();
			visited[ a ] = 1;

			for( int i = 0; i < num[a].size(); i++ ){
				if( visited[ num[a][i] ] == 0 )
					q.push( num[a][i] );
			}
		}
		count++;
		
	}
	/*while(!q.empty()){
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
	}*/
	cout<<count<<endl;
}

int main(){
	int t;
	cin>>t;
	while( t-- )
		solve();

	return 0;
}