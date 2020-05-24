#include<bits/stdc++.h>
using namespace std;

int MAX = 1e4 + 5;
#define ll long long

int solve(){
	string stra,strb;
	cin>>stra>>strb;

	vector< int > counta(26,0);
	vector< int > countb(26,0);
	queue < char > character;

	int lngthb = strb.length();

	for( int i = 0; i < stra.length(); i++ ){		
		int x = (int)stra[i] - 97;
		counta[x]++;
	}

	for( int i = 0; i < strb.length(); i++ ){
		int x = (int)strb[i] - 97;
		countb[x]++;
	}
	
	for( int i = 0; i < 26; i++ ){
		if( countb[i] > 0 && counta[i] == 0 ){
			cout<<"-1"<<endl;
			return 1;	
		}
	}

	int x;
	
	for( int i = 0; i < stra.length(); i++ ){
		x = (int)stra[i] - 97;
		
		if( countb[x] ){
			character.push( stra[i] );
		}

	}

	character.push( '#' );

	char m;
	int count=1,j=0;
	int w=10;

	while( lngthb ){

		m = character.front();
		character.pop();

		if ( m == '#') {
			character.push( '#' );
			count++;continue;
		}

		if( strb[j] == m ){
			
			countb[ (int)strb[ j ] - 97 ]--;
			j++;lngthb--;
			
		}

		if( countb[ (int)m - 97 ] ){
			character.push( m );
		}

	}
	cout<<count<<endl;
	return 1;
}



int main(){
	int test;
	cin>>test;
	while(test--)
		solve();

	return 0;
}
