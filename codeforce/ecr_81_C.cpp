#include<bits/stdc++.h>
using namespace std;

int MAX = 1e4 + 5;
#define ll long long

int solve(){
	string stra,strb;
	cin>>stra>>strb;

	vector< int > count(26,0);
	queue < char > character;

	int lngthb = strb.length();

	for( int i = 0; i < stra.length(); i++ ){		
		count[ stra[i] - 'a' ]++;
	}

	for( int i = 0; i < strb.length(); i++ ){
		if(count[ strb[i] - 'a' ] == 0){
			cout<<"-1"<<endl;
			return 1;
		}
	}

	int x;
	
	for( int i = 0; i < stra.length(); i++ ){
		if( count[stra[i] - 'a'] ){
			character.push( stra[i] );
		
		}
	}

	character.push( '#' );

	char m;
	int cnt=1,j=0;
	int w=10;

	while( w-- ){

		m = character.front();
		character.pop();

		if ( m == '#') {
			character.push( '#' );
			cnt++;continue;
		}

		if( strb[j] == m ){
			count[ strb[ j ] - 'a' ]--;
			j++;lngthb--;
		}

		if( count[ m - 'a' ] ){
			character.push( m );
		}

	}
	cout<<cnt<<endl;
	return 1;
}



int main(){
	int test;
	cin>>test;
	while(test--)
		solve();

	return 0;
}
