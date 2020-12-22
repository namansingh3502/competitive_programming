#include<iostream>

using namespace std;

void solve(){
	int n,d,x,risk=0,no_risk=0;
	cin>>n>>d;

	for( int i = 0; i < n; i++ ){
		cin>>x;
		if( x <= 9 || x >= 80 ) risk++;
		else{
			no_risk++;
		}
	}

	int ans = 0;

	ans += ( risk / d ) + ( no_risk / d );

	if( risk % d ) ans++;
	if( no_risk % d ) ans++;

	cout<<ans<<endl;
}

int main(){
	int test;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}