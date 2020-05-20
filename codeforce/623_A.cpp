#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MAX = 1e4 + 5;


void solution(){
	int a,b,x,y;
	cin>>a>>b>>x>>y;
	
	x++;y++;

	if( a == 0 || b == 0){

		int h = max( x - 1 , a - x );
		int v = max( y - 1 , b - y );
		int ans = max( h , v );
		cout<<ans<<endl;

	}
	else{

		int h = max( x - 1 , a - x );
		int v = max( y - 1 , b - y );

		int ans = max( h * b , v * a);

		cout<<ans<<endl;
	
	}
	
}



int main(){
	int test;
	cin>>test;

	while( test-- )
		solution();

	return 0;
}