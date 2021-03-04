#include<bits/stdc++.h>

using namespace std;

vector<int> arr(1000);

void solve(){
	int q,num,d;
	for( int i = 0; i < 1000; i++ ) arr[i] = 0;

	arr[0] = 1;
	cin>>q>>d;

	if( !d ) d += 10;

	int mx = d*10;

	for( int i=0; 10*i+d <= mx; ++i ){
		for( int j=0; 10*i+d+j <= mx; ++j ){
			arr[10*i+d+j] |= arr[j];
		}
	}
	while( q-- ){
		cin>>num;
		if( num >= mx || arr[num] ) cout<<"YES\n";
		else cout<<"NO\n";
	}
}

int main(){

	int test;
	cin>>test;

	while( test-- )
		solve();
}