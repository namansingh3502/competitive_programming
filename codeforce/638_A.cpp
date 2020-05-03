#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
using namespace std;

#define ll long long

void solve(){
int n;
	cin>>n;

	ll a=pow(2,n);
	ll d=2;
	ll b=0;
	int i;
	ll ans;
	if(n==2){
		cout<<2<<endl;
	}

	else{
		for(i=1;i<=(n/2)-1;i++){
			a += pow(2,i);

		}
	
		ll c=0;
		for(i=(n/2);i<n;i++){
			c += pow(2,i);
		}
	
		ans = abs(a + b - c);
		cout<<ans<<endl;

	}
}

int main(){
	int test;
	cin>>test;
	while(test--){
		solve();
	}
	return 0;
}