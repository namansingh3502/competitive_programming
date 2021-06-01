#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

#define ll long long

vector< int > count( 5000005, 0 );


void factor_count( int num ){

	int root = sqrt( num ), factor = 1;
	
	for( int i = 2; i <= root; i++ ){
		if( !(num % i) ) factor += 2; 
	}

	if( root * root == num ) factor--;

	count[ num ] = factor;

}

void solve(){

	ll ans = 0, m, n, b, extra;

	cin>>n>>m;

	b =  min( m, n);

	for( int i = 2; i <= b; i++ ){
		if( count[i] == 0 ) factor_count( i );
		ans += count[i];
		cout<< i <<" "<<count[i]<<endl;
	}

	if( n > m ){
		extra = (n * ( n + 1 ) - m * ( m + 1 ) ) / 2 - n + b;  
	}

	ans += extra;

	cout<< ans<<" "<<extra<<endl;

}

int main(){

	int test;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}