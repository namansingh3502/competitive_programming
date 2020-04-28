#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	int test;
	cin>>test;
	while(test--){
		
		ll a,b,q,count=0;
		cin>>a>>b>>q;

		if(a>b)swap(a,b);

		ll lcm = (a*b)/__gcd(a,b);
		ll range = lcm-b;

		while(q--){
			ll l,r;
			cin>>l>>r;

			ll l_d = l/lcm + 1;
			ll l_r = l%lcm;

			ll r_d = r/lcm;
			ll r_r = r%lcm;

			ll pro = r_d-l_d;

			ll ans=pro*range;

			//left
			ans += lcm - max(l_r,b);
			if(r_r - b >=0){
				ans += r_r - b+1;
			}

			cout<<ans<<endl;


		}


	}
}