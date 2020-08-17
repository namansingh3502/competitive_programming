#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int MAX = 1e9 + 5;
int n,k;

int check(int i, vector< int >& num, vector< int >& min_cost ){
	int j = i;
	if( min_cost[ i ] != MAX ){
		return min_cost[ i ];
	}

	unordered_map< int, int > count;
	int last, cost = MAX, arg = 0;

	count[ num[ i ] ] = 1;
	i += 1;

	for( ; i <= n; i++ ){
		if( count[ num[ i ] ] == 0 )  count[ num[ i ] ] = 1;

		else if( count[ num[ i ] ] > 0 ){
			if( i <= n ){
				last = check( i, num, min_cost );
				last += arg + k;
			}
		
			cost = min( last, cost );

			if( count[ num[ i ] ] == 1 ){
				arg += 2;
				count[ num[ i ] ] += 1;
			}
			
			else arg++;
		}
	}
	cost = min( cost, arg + k);
	min_cost[ j ] = cost;
	return cost;
}

void solve(){
	int x,ans=MAX;

	cin>>n>>k;

	vector< int > in( n );
	vector< int > num( 1, 0 );
	vector< int > fam( 102, 0 );

	for( int i = 0; i < n; i++ ){
		cin>>in[ i ];
		fam[ in[ i ] ] += 1;
	}
	for( int i = 0; i < n; i++ )
		if( fam[ in[ i ] ] > 1 )
			num.push_back( in[ i ] );

	num.push_back( 0 );
	n = num.size() - 2;

	vector< int > min_cost( n + 1, MAX );
	min_cost[ n ] = k;

	int i = 1,arg = 0;
	int last,cost=MAX;

	unordered_map< int, int > count;
	count[ num[ 1 ] ] = 1;

	for( i = 2; i <= n + 1; i++ ){

		if( count[ num[ i ] ] == 0 )  count[ num[ i ] ] = 1;

		else if( count[ num[ i ] ] > 0 ){
			if( i <= n ){
				last = check( i, num, min_cost );
				last += arg + k;
			}
		
			cost = min( last, cost );

			if( count[ num[ i ] ] == 1 ){
				arg += 2;
				count[ num[ i ] ] += 1;
			}

			else arg++;
		}
	}

	cost = min( cost, arg + k );

	cout<<cost<<endl;

}

int main(){
	int t;
	cin>>t;

	while( t-- )
		solve();

	return 0;
}