#include<iostream>
#include<vector>
#include<algorithm>

#define ll long long

using namespace std;

void solve(){

	int n;
	cin>>n;
	vector< int > arr( n );

	for(int i = 0; i < n; i++ )
		cin>>arr[i];

	sort( arr.rbegin(), arr.rend() );

	ll ans = 0;

	for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      if (arr[i] % 2 == 0) {
        ans += arr[i];
      }
    } else {
      if (arr[i] % 2 == 1) {
        ans -= arr[i];
      }
    }
  }

	if( ans == 0 ) cout<<"Tie"<<endl;
	else if( ans > 0 ) cout<<"Alice"<<endl;
	else cout<<"Bob"<<endl;

}

int main(){
	int test;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}