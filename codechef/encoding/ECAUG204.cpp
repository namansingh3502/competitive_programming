#include<iostream>
#include<unordered_map>

using namespace std;

void solve(){
	int n,x,ans = 1;
	cin>>n;
	unordered_map< int, int > num;

	for( int i = 0; i < n; i++ ){
		cin>>x;
		if( num[x] == 1 ) ans = 0;
		num[x] += 1;
	}

	if( ans == 1 )cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}

int main(){

	int t;
	cin>>t;

	while( t-- )
		solve();

	return 0;
}