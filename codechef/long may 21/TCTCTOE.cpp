#include <iostream>
#include <vector>

using namespace std;

char inp[3][3];


void solve(){

	int x,o,u;
	x = o = u = 0;

	for( int i = 0; i < 3; i++ )
		for( int j = 0; j < 3; j++ ){
			cin>>inp[i][j];

			if( inp[i][j] == 'X' ) x++;
			else if( inp[i][j] == 'O' ) o++;
			else if( inp[i][j] == '_') u++;

		}

	if( x - o != 0 && x - o != 1 ){
		cout << 3 << endl;
	}
	else{

		bool check_x = false, check_o = false;

		for( int i = 0 ; i < 3; i++ ){
			if( inp[i][0] == inp[i][1] && inp[i][1] == inp[i][2] ){
				if( inp[i][0] == 'X' ) check_x = true;
				if( inp[i][0] == 'O' ) check_o = true;
			}
			if( inp[0][i] == inp[1][i] && inp[1][i] == inp[2][i] ){
				if( inp[i][0] == 'X' ) check_x = true;
				if( inp[i][0] == 'O' ) check_o = true;
			}
		}

		if(	inp[0][0] = 'X' && ( inp[0][0] == inp[1][1] && inp[1][1] == inp[2][2] ) ) check_x = true; 
		if( inp[0][0] = 'O' && ( inp[0][0] == inp[1][1] && inp[1][1] == inp[2][2] ) ) check_o = true;


		if(	inp[0][2] = 'X' && ( inp[0][2] == inp[1][1] && inp[1][1] == inp[2][0] ) ) check_x = true; 
		if( inp[0][2] = 'O' && ( inp[0][2] == inp[1][1] && inp[1][1] == inp[2][0] ) ) check_o = true;


		if( check_x && check_o ) cout << 3 << endl;
		else if( check_x || check_o ) cout << 1 << endl;
		else cout << 2 << endl;
	}

}


int main(){

	int test;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}