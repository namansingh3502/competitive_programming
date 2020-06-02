#include<bits/stdc++.h>
using namespace std;

int MAX = 1e4 + 5;

void solve(){
	int r,c;
	string str;
	vector< string > grid;
	vector< vector < int > > current(r,vector < int > ( c, 0));
	queue < pair< int, int > > one;
	queue < pair< int, int > > zero;

	cin>>r>>c;
	
	for( int i = 0; i < r; i++){
		cin>>str;
	}

	for( int i = 0; i < r; i++ ){
		for( int j = 0; j < c; j++ ){
			if( grid[i][j] == '1')

		}
	}



}


int main(){
	int test;
	cin>>test;
	int a = 1;

	while( test-- ){
		solve();
	}

	return 0;

}