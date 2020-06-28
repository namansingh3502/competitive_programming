#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,t;
	cin>>n>>t;

	string str;
	cin>>str;

	for( int i = 0; i < t; i++ ){
		for( int i = 0; i < n - 1; i++ ){
			if( str[ i ] == 'B' && str[ i + 1 ] == 'G' ){
				swap( str[ i ], str[ i + 1 ] );i++;
			}
		}
	}
	
	cout<<str<<endl;;

	return 0;
}
