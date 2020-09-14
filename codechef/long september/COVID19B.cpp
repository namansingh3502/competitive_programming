#include<iostream>
#include<vector>
#include<queue>

using namespace std;

void solve(){

	int n,x,y,mn=10,mx=0;
	cin>>n;

	vector< vector < float > > time( n+1, vector< float > ( n+1, 0.0 ));
	vector< int > vel( n+1 );
	vector< int > count( n+1, 0 );

	for( int i = 1; i <= n; i++ ) cin>>vel[i];

	for( int i = 1; i <= n; i++ ){
		for( int j = 1; j <= n; j++ ){
			x = i - j;
			y = vel[j] - vel[i];

			if( x * y > 0 ){
				time[i][j] = (float) (i-j) / (vel[j] - vel[i]) ;
				time[j][i] = (float) time[i][j];
			}
			else{
				time[i][j] = -1;
			}
		}
	}

	queue< int > q;

	for( int i = 1; i <= n; i++ ){
		vector< int > infected( n+1, 0 );
		vector< float > infect_time( n+1 );
		q.push( i );
		infected[i] = 1;
		infect_time[i] = 0.00;

		while( !q.empty() ){

			x = q.front();
			q.pop();
			count[i] += 1;

			for( int j = 1; j <= n; j++ ){
				if( infected[j] == 0 && time[x][j] >= infect_time[x] ){
					infected[j] = 1;
					infect_time[j] = time[x][j]; 
					q.push( j );
				}
			}
		}
	}

	for( int i = 1; i <= n; i++ ){
		mn = min( mn, count[i] );
		mx = max( mx, count[i] );
	}
	
	cout<<mn<<" "<<mx<<endl;

}

int main(){
	int t;
	cin>>t;

	while( t-- )
		solve();
	return 0;
}

