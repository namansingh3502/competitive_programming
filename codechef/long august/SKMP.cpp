#include<iostream>
#include<vector>
#include<string>

using namespace std;


void solve(){

	string s,p;
	char a = 'a';
	int check=0;
	vector< int > count( 26, 0 );
	cin>>s>>p;

	for( int i = 0; s[i]; i++ )	 count[ s[i] - 'a' ] += 1;

	for( int i = 0; p[i]; i++ )  count[ p[i] - 'a' ] -= 1;

	for( int i = 0; p[i]; i++ ){
		if( p[i] > p[0] ){
			check = 2;  break;
		}
		else if( p[i] < p[0] ){
			check = 1;  break;
		}
	}

	for( ; a < p[0]; a++ ){
		while( count[ a - 'a' ] > 0 ){
			cout<<a;   count[ a - 'a' ] -= 1;
		}
	}
	if( check == 0 )  cout<<p;
	if( check == 1 )  cout<<p;

	while( count[ a - 'a' ] > 0 ){
			cout<<a;   count[ a - 'a' ] -= 1;
		}

	if( check == 2 )  cout<<p;

	for( ; a <= 'z'; a++ ){
		while( count[ a - 'a' ] > 0 ){
			cout<<a;   count[ a - 'a' ] -= 1;
		}
	}

	cout<<endl;
}


int main(){

	int t;
	cin>>t;

	while(t--)
		solve();

	return 0;
}