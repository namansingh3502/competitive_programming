#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void solve(){

	int n,x,first,prev;
	cin>>n;

	vector< int > count( n+1, -1 );

	cin>>prev;
	first = prev;

	for( int i = 1; i < n; i++ ){
		cin>>x;
		if( x == prev ) continue;
		else if( count[x] == -1 ) count[x] = 1;
		else if( count[x] > 1 ) count[x]++;
		prev = x;
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