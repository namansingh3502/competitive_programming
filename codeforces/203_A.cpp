#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;

	cin>>n>>m;

	int x,y;
	int mn=0,mm=1000000,mmn =1000000;

	for( int i = 0; i < n; i++ ){
		cin>>x;
		mn = max( x , mn );
		mmn = min( x , mmn ); 
	}

	for( int i = 0; i < m; i++ ){
		cin>>y;
		mm = min( mm , y );
	}

	if( 2 * mmn <= mn  && mn < mm )
		cout<<mn<<endl;

	else if( 2 * mmn > mn  &&  2 * mmn < mm )
		cout<< 2 * mmn<<endl;

	else cout<< -1 <<endl;

	return 0;
}
