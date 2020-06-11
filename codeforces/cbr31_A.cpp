#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin>>n;

	vector< int > index( 2000 , 0 );
	vector< int > inp( n );

	for( int i = 0; i < n; i++ ){
		cin>>inp[i];
		index[ inp[ i ] ] = i + 1;
	}

	int x,ans=0;

	for( int i = 0 ; i < n; i++ ){
		for( int j = i + 1 ; j < n; j++ ){
			x = inp[i] + inp[j];
			if( index[ x ] ){
				cout<< index[ x ]<<" "<< i+1 << " "<< j+1<<endl;
				ans = 1;break;
			}
		}
		if( ans == 1)break;
	}

	if( ans != 1 ) cout<<"-1"<<endl;


	return 0;
}
