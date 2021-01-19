#include<iostream>
#include<vector>
#include<string>

using namespace std;

#define ll long long

//int main(){
void solve(){

	int n;
	cin>>n;

	char a[n],prev='l';
	sting b;
	cin>>b;

	a[0] ='1';

	for( int i = 0; i < n-1; i++ ){
		if( b[i] == '1' && b[i+1] == '0' )
			a[i+1] = '1';

		else if( b[i] == '1' && b[i+1] == '1' )
			b[i+1] = '0';
	}

	for( int i = 0; i < n; i++ ){

		cout<<a[i];
	}

	cout<<endl;



}

int main(){

	int test;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}