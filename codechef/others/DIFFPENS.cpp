#include<iostream>
#include<vector>

using namespace std;


void solve(){
	int n,ans=0;
	cin>>n;
	vector< int > arr;
	char x;
	cin>>x;
	arr.push_back( x );
	for( int i = 1; i < n; i++ ){
		cin>>x;
		if( x != arr[ arr.size() - 1 ] ){
			arr.push_back( x );
		}
	}

	cout<< n - arr.size() <<endl;

}

int main(){

	int test;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}