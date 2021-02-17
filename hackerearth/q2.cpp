#include<iostream>
#include<vector>

using namespace std;

#define ll long long

void solve(){
	int n,ans=0;

	cin>>n;

	vector<int> arr(n);
	


	for(int i = 0; i < n; i++ )
		cin>>arr[i];


	for( int i = 0; i < n; i++ ){
		ll val=0;
		for( int j = i; j < n; j++ ){
			
			val = val^arr[j];
			
			if( val % 2 == 0)  ans++;
		}
	}

	cout<<ans<<endl;



}

int main(){
	int test;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}