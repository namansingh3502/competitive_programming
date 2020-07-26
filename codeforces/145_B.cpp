#include<bits/stdc++.h>
using namespace std;

int main(){
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
		int n,k,x;
	cin>>n>>k;

	vector< int > num(n);
	vector< int > pos(n);

	for( int i = 0; i < n; i++ ){
		cin>>num[i];
		pos[ i ] = num[i];
	}

	sort( num.rbegin(), num.rend() );

	int v = num[ k-1 ];
	cout<<v<<endl;


	for( int i = 0; i < n; i++ ){
		if( k == 0 ) break;
		if( pos[i] >= v ){
			cout<<i + 1<<" ";
			k--;
		}

	}

	return 0;

}