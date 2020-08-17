#include<iostream>
#include<vector>
#include<unordered_map>
#include<iterator>
#include<unordered_set>

using namespace std;


void solve(){
	int n,k,x,ans=1;
	unordered_set< int > num;

	cin>>n>>k;

	for( int i = 0; i < n; i++ ){
		cin>>x;
		if ( num.find( x ) != num.end() ){
			num.clear();
			ans++;
		}
		num.insert( x );
	}

	cout<<ans<<endl; 

}


int main(){
	int t;
	cin>>t;
	while(t--)
		solve();

	return 0;
}