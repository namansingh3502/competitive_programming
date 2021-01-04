#include<iostream>
#include <math.h>

using namespace std;

int check( int n ){
	int cnt=0;
	while( n%2 == 0 ){
		cnt++;
		n /= 2;
	}

	return cnt;
}

void solve(){
	int width,height,num,count=0;
	cin>>width>>height>>num;

	count += check( width );
	count += check( height );

	int ans = pow( 2, count );

	if( ans >= num )
		cout<<"YES"<<endl;
	else{
		cout<<"NO"<<endl;
	}

}

int main(){
	int test;
	cin>>test;

	while( test-- )
		solve();

}
