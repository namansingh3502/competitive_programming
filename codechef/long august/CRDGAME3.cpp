#include<iostream>

using namespace std;

#define ll long long

void solve(){

	ll chef,rick,count=0;
	cin>>chef>>rick;

	ll a = chef / 9, b = rick / 9;

	if( chef > a * 9 ) a++;
	if( rick > b * 9 ) b++;

	if( b > a ) cout<< 0 << " "<< a << endl;
	else cout<< 1 << " " << b << endl;
}


int main(){

	int t;
	cin>>t;

	while( t-- )
		solve();

	return 0;
}