#include<iostream>
#include<vector>

using namespace std;

vector< int > value( 100005 );

#define NUM 1000000007

void solve(){

	int n;
	cin>>n;

	cout<<value[n-1]<<endl;
}

int main(){

	value[0] = 1; 

	for( int i = 1; i < 100005; i++ )
		value[i] = ( value[i-1] * 2 ) % NUM; 


	int test;
	cin>>test;

	while( test-- );
		solve();

	return 0;

}