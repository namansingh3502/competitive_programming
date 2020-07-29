#include<iostream>
#include<algorithm>

using namespace std;

void solve(){
	int a,b,c,mn,ans;
	cin>>a>>b>>c;

	if( a == 0 || b == 0 ) cout<<0<<endl
	else{ 
		mn = min( min( a, b ), c );
		ans = mn;
		a -= mn;	b -= mn;	c -= mn;
		if( a || )
	}
}

int main(){
	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}