#include<iostream>
using namespace std;

#define ll long long

int main(){
	int test;
	cin>>test;
	while(test--){
		ll x,y,a,b;
		cin>>x>>y>>a>>b;

		ll m,n;
		m=min(x,y)*b;
		n=(max(x,y)-min(x,y))*a;
		ll ans_1=m+n;


		ll ans_2=(x+y)*a;

		ll ans=min(ans_1,ans_2);

		cout<<ans<<endl;

	}
	return 0;
}