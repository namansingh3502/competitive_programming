#include<iostream>
#include<vector>

using namespace std;

void solve(){
	int n;
	cin>>n;

	vector< int > arr(n+1);
	vector< int > cnt(n+1,0);
	
	for ( int i = 1; i <= n; i++ )
		cin>>arr[i];

	int ans=0;

	for( int i = n; i ; i-- ){

		int score = arr[i];

		if( arr[i] + i <= n )
			score += cnt[ arr[i] + i ];

		ans = max( ans, score );
		cnt[i] = score;
	}

	cout<<ans<<endl;

}

int main(){

	int test;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}