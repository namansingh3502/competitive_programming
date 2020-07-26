#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

	int n,x;
	long double pie = 3.1415926536,ans=0.000000000000;

	cin>>n;
	
	vector< int > num(n,0);

	for( int i = 0; i < n; i++ )
		cin>>num[i];
	
	sort( num.rbegin(),num.rend());

	for( int i = 0; i < n; i++ ){
		if( i % 2 ) ans -= num[i] * num[i];
		else ans += num[i] * num[i];
	}

	printf("%Lf", ans * pie );

}