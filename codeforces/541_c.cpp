#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

int main(){

	int n;
	cin>>n;

	vector< int > num(n);

	for( int i = 0; i < n; i++ )  cin>>num[i];
	
	sort( num.rbegin(), num.rend() );

	for( int i = 0; i < n; i++ ){
		if( i % 2 ) continue;
		cout<<num[i]<<" ";
	}

	for( int i = n-1; i >= 0; i-- ){
		if( i % 2 )
		cout<<num[i]<<" ";
	}

	return 0;
}