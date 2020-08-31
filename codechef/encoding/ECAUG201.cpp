#include<iostream>

using namespace std;

#define ll long long

ll gcd(ll a, ll b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

void solve(){

	ll a,b,ans;
	cin>>a>>b;

	ans = (a*b)/gcd(a, b);

	cout<<ans<<endl;
}

int main(){

	int t;
	cin>>t;
	while( t-- )
		solve();

	return 0;
}