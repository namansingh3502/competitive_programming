#include<iostream>
#include<vector>
#include<string>

using namespace std;

#define ll long long

void solve(){

	ll a, b, x=0, y=0;

	cin >> a >> b;

	if( b > 1 ){
		x = a;
		y = a *b;

		cout<<"YES"<<endl;
		cout<<x<<" "<<y<<" "<< x+y <<endl;
	}
	else cout<<"NO"<<endl;


}

int main(){

	int test;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}