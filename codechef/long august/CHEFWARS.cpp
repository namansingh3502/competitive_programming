#include<iostream>

using namespace std;

#define ll long long


void solve(){
	ll h,p;
	int ans=0;
	cin>>h>>p;

	while( h > 0 ){
		if( p == 0 ) break;

		h -= p;
		p /= 2;
	}

	if( p == 0 && h > 0 ) cout<< 0 << endl;
	else cout<< 1 <<endl; 

}


int main(){
	int t;
	cin>>t;

	while(t--)
		solve();

	return 0;
}