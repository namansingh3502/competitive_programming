#include<iostream>

using namespace std;

#define ll long long

void solve(){
	ll n,ans=0;
	cin>>n;

	ll floor= n/4;
	n %= 4;

	if( floor )	ans = floor * 44 + 16 - n*4;

	if( n == 1 ) ans += 20;
	else if( n == 2 ) ans += 36;
	else if( n == 3 ) ans += 51;

	cout<< ans <<endl; 



}

int main(){

	int test=1;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}