#include<iostream>

using namespace std;


#define ll long long

ll y,ans,mx = 10e10 + 5,l_mx = -10e10 - 5, l,r,val;

void solve(){

	char x;
	int n;

	l = l_mx;
	r = mx;

	cin>>n;

	while( n-- ){

		cin>>x>>y;

		if( x == 'R' ) l = max( l, y );
		else r = min( r, y );

	}

	if( r == mx || l == l_mx ) cout<<-1<<endl;
	
	else if( l > r ) cout<<-1<<endl;
	
	else if( r - l == 1 || r - l == 0 ) cout<<-1<<endl;

	else{

		ans = r - l;

		if( ans < 0 ) ans *= -1;

		cout<<ans-1<<endl;

	}

}


int main(){
	int test;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}