#include<iostream>

using namespace std;

#define ll long long

int main(){
	int n;
	cin>>n;

	ll ans = 0;

	while( n-- )  ans += pow( 2, n );

	cout<<ans<<endl;

	return 0;

}