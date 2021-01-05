#include<iostream>

using namespace std;

void solve(){
	int n,x,one=0,two=0;
	cin>>n;

	for( int i=0; i < n; i++ ){
		cin>>x;
		if( x == 1 ) one++;
		else two++;
	}

	if( one % 2 )
		cout<<"NO"<<endl;
	else if( two % 2 && one < 2 )
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;

}

int main(){
	int test;
	cin>>test;

	while( test-- )
		solve();

	return 0;

}