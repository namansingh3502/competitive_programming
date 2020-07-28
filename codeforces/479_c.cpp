#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

	int n,k,x,mn= 10000000;
	cin>>n>>k;

	vector< int > num(n);

	for( int i = 0; i < n; i++ ){
		cin>>num[i];
		mn = min( mn, num[i] );
	}
	sort( num.begin(), num.end() );
	
	if( num[ k ] == num[ k - 1 ] ) cout<< -1 << endl;
	else if( k == 0 ){
		if( mn == 1 ) cout<< -1 << endl;
		else cout<<1<<endl;
	}
	else cout<< num[ k - 1 ] << endl;

	return 0;
}