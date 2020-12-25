#include<iostream>
#include<vector>

using namespace std;

void solve(){
	int n,x,ans=-1;
	cin>>n;
	vector< int > arr( n+1, 0 );

	for( int i = 1; i <= n; i++ ){
		cin>>x;

		if( arr[x] ) arr[x] = -1;
		else arr[x] = i;
	}

	for ( int i = 1; i <= n; i++ )
		if( arr[i] > 0 ){
			ans = arr[i];
			break;
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