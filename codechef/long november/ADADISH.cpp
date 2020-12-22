#include<iostream>
#include<vector>

using namespace std;

int ans = 100,a=0,b=0;

void solve(){
	int n,x,sum=0;
	vector < int > arr;
	cin>>n;

	for( int i = 0; i < n; i++){
		cin>>x;
		arr.push_back( x );
		sum += x;
	}

	dp( arr );
}

int main(){
	int test;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}