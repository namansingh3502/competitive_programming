#include<iostream>
#include<unordered_map>
#include<iterator>

using namespace std;

int main(){

	int n,x;
	unordered_map< int, int > num;
	unordered_map< int, int >::iterator itr;

	cin>>n;

	for( int i = 0; i < n; i++ ){
		cin>>x;
		num[x] += 1;
	}

	int ans=0;

	for( itr = num.begin(); itr != num.end(); itr++ ){
		ans += itr->second - 1;
		if( itr->first > n ) ans++;
	}

	cout<<ans<<endl;

	return 0;
}