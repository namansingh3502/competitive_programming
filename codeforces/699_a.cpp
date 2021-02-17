#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

#define ar array<int, 2>
#define pii pair<int, int>
#define pb push_back
#define vt vector
#define For(i, n) for (int i = 0; i < n; i++)
#define Rev(i, n) for (int i = n - 1; i >= 0; i--)
#define FOR(i, n) for (int i = 1; i <= n; i++)
#define REV(i, n) for (int i = n; i >= 1; i--)
#define Rep(i, a, b) for (int i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int x,y;

void check( char a, char b , string str ){

	int count_x=0,count_y=0;

	for( int i = 0; str[i]; i++ ){
		if( str[i] == b ) count_x++;
		else if( str[i] == a ) count_y++;
	}

	if( abs(x) <= count_x && abs(y) <= count_y ) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

}

void solve(){

	string path;
		x=y=0;


	cin>>x>>y;
	cin>>path;


	if( x >= 0 && y >= 0 ) check('U','R', path);
	else if( x <= 0 && y >= 0 ) check('U','L', path);
	else if( x <= 0 && y <= 0 ) check('D','L', path);
	else if( x >= 0 && y <= 0 ) check('D','R', path);

}

int main(){

	int test=1;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}