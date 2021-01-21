#include<iostream>

using namespace std;

void solve(){

	string s;
	cin>>s;

	int arr[27];
	for( int i = 1; i < 27; i++ ) arr[i] = 0;

	for( int i = 0 ; s[i]; i++ )
		arr[ s[i] - 'a' + 1 ] += 1;

	int ans=0,odd=0,even=0;

	for( int i = 1; i < 27; i++ ){
		ans += arr[ i ] / 3;
		if( arr[ i ] % 3 == 1 ){
			odd++;
		}
		else if ( arr[ i ] % 3 == 2 ){
			even++;
		}
	}

	ans += min( even, odd );
	odd -= min( even, odd );
	even -= min( even, odd );

	ans += even / 3;
	cout<<ans<<endl;
}

int main(){
	int test;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}