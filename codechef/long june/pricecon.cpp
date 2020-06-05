//codechef long june  PRICECON

#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n,k,x;
	cin>>n>>k;
	long long loss=0;
	for( int i = 0; i < n; i++ ){
		cin>>x;
		if( x > k )
			loss += x - k;
	}
	cout<<loss<<endl;;
}


int main(){
	int test;
	cin>>test;
	while( test-- )	
		solve();

	return 0;
}