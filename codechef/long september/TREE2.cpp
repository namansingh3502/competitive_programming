#include<iostream>
#include<unordered_set>

using namespace std;

void solve(){
	int n,x,ans = 0;
	cin>>n;

	unordered_set< int > num;

	for( int i = 0; i < n; i++ ){
		cin>>x;
		num.insert(x);
	}
	if( num.find(0) != num.end() )
		cout<< num.size() - 1 <<endl;
	else cout<< num.size() <<endl;
}

int main(){
	int t;
	cin>>t;

	while( t-- )
		solve();

	return 0;
}