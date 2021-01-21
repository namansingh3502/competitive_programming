#include<iostream>
#include<vector>

using namespace std;


void solve(){
	vector<int> arr( 26);
	int n;
	cin>>n;
	char x;

	for( int i = 0; i < n ; i++ ){
		cin>>x;
		if( arr[ x-'a' ] == 0 ){
			arr[ x-'a' ] = 1;
		}
		
		else {
			arr[ x-'a' ] = 0;
		}
	}

	int ans = 0;
	for( int i = 0; i < 26; i++ ){
		if( arr[i] == 1 ) ans++;
	}
	cout<<ans-1<<endl;
}

int main(){

	int test;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}