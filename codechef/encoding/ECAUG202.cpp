#include<iostream>

using namespace std;

void solve(){
	int n,x,ans=0;
	cin>>n;
	for( int i = 0; i < n; i++ ){
		cin>>x;
		if( x % 2 == 0 )
			ans += x;
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while( t-- )
		solve();

	return 0;
}