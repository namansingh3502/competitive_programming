#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){

	int n,m;
	string str;

	cin>>n>>m;
	cin>>str;

	vector< int > count( 26, 0 );

	for( int i = 0; i < n; i++ )
		count[ str[i] - 'a' ]++;
	
	for( int i = 0; i < 26; i++ ){
		
		if( m == 0 ) count[ i ] = 0;

		else if( m < count[ i ] ){
			count[ i ] = m;
			m = 0;
		}

		else if( m >= count[ i ] )
			m -= count[ i ];
	}

	for( int i = 0; i < n - m; i++ ){
		if( count[ str[i] - 'a' ] ) count[ str[i] - 'a' ]--;
		else cout<<str[i];
	}

	return 0;
}