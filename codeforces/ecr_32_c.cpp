#include<iostream>
#include<queue>
#include<vector>

using namespace std;

#define ll long long

int main(){

	ll n,m,x,y;
	queue< ll > q;

	cin>>n>>m;

	vector< vector< ll > > num( n+1 );
	vector< ll > visited( n+1, 0 );
	vector< ll > cost( n+1 );

	cost[0] = 0;

	for( ll i = 1; i <= n; i++ )  cin>>cost[i];

	for( ll i = 0; i < m; i++ ){
		cin>>x>>y;
		num[ x ].push_back( y );
		num[ y ].push_back( x );
	}

	ll mn, ans = 0;


	for( ll i = 1; i <= n; i++ ){
		if( visited[i] ) continue;

		q.push(i);
		visited[i] = 1;

		mn = cost[i];
	
		while( !q.empty() ){
			x = q.front();
			q.pop();

			for( ll i = 0; i < num[x].size(); i++ ){
				if( visited[ num[ x ][ i ] ] )  continue;

				q.push( num[ x ][ i ] );
				visited[ num[x][i] ] = 1;
				
				mn = min( mn, cost[ num[x][i] ] );
			}
		}
		ans += mn;
	}

	cout<<ans<<endl;

	return 0;
}
