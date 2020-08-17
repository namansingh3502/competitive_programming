#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int MAX = 1e8 + 5 ;
int n,k,x,ans;
//1 0 1
int check( int i, int arg, int table ){

	if( i == n + 1 ){
		x = (table - 1) * k + arg;
		ans = min( x, ans );
		return 1;
	}
	for(int j = i ; j <=n; j++ ){
		check( j + 1, arg + sub_arr[ i ][ j ], table + 1 );
	}

}

void solve(){

	int arg = 0;
	ans = MAX;
	cin>>n>>k;

	vector< int > num( n + 1 );
	vector< int > fam_rep( 101 );
	vector< vector < int  > > sub_arr( n, vector< int > );

	for( int i = 1; i <= n; i++ )  cin>>num[ i ];

	for( int i = 1; i <= n; i++ ){

		for( int a = 1; a < 101; a++ )  fam_rep[ a ] = 0;
		arg = 0;

		for( int j = i; j <= n j++ ){

			if( fam_rep[ num[ j ] ] == 0 ) fam_rep[ num[ j ] ] = 1;
			else if( fam_rep[ num[ j ] ] == 1 ){
				fam_rep[ num[ j ] ] = 2;  arg += 2;
			}
			else arg++;

			sub_arr[ i ].insert( arg );
		}
	}

	for( int i = 1; i <=n; i++ ){
		for( int j = 0; j < sub_arr[i].size(); j++ ){
			cout<< sub_arr[i][j] <<"  ";
		}
		cout<<endl;
	}

	/*for( int i = 1; i <= n; i++ ){

		for( int a = 1; a < 101; a++ ) fam_rep[ a ] = 0;
		arg = 0;

		for( int j = i; j <= n; j++ ){
			
			if( fam_rep[ num[ j ] ] == 0 ) fam_rep[ num[ j ] ] = 1;
			else if( fam_rep[ num[ j ] ] == 1 ){
				fam_rep[ num[ j ] ] = 2;  arg += 2;
			}
			else arg++;
			
			sub_arr[ i ][ j ] = arg;
		}
	}
	check( 1, 0, 1, sub_arr );
	cout<<ans<<endl;*/
}

int main(){

	int t;
	cin>>t;

	while( t-- )
		solve();

	return 0;
}