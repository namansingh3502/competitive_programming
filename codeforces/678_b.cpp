#include<bits/stdc++.h>

using namespace std;

int is_prime( int n ){
	for( int i = 2; i < n; i++ )
        if( n % i == 0 )
            return 0;
    return 1;
}

void solve(){
	int n,a=0;
	cin>>n;

	vector < vector < int > > arr( n+1, vector< int > (n+1, 0 ));

	for( int i = 1; i <= n; i++ ){
		arr[i][i] = 1;
		if( i+1 == n ) arr[i][i+1] = 1;
		else arr[i][(i+1)%n] = 1;
	}

	for( int i = 1; i <= n; i++ ){
		for( int j = 1; j <= n; j++ ){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

}

int main(){
	int test;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}