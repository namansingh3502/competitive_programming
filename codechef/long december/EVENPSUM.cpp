#include<iostream>

using namespace std;

#define ll long long

void solve(){
	int a,b,a_odd,b_odd;
	cin>>a>>b;

	a_odd = a / 2;
	b_odd = b / 2;

	if( a % 2 ) a_odd++;
	if( b % 2 ) b_odd++;

	int ans = (a/2)*(b/2) + ( a_odd*b_odd );

	cout<<ans<<endl;
}

int main(){
	int test;
	cin>>test;

	while( test-- ){
		solve();
	}
	return 0;
}