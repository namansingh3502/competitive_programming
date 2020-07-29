#include<iostream>

using namespace std;

int main(){

	int n,a,b,x,count=0;

	cin>>n>>a>>b;

	for( int i = 0; i < n; i++ ){
		cin>>x;
		if( x <= a ) count++;
	}

	if( a > b ) cout<< n <<endl;
	else{
		if( count % 2 )  cout<< count / 2 + 1 <<endl;
		else cout<< count / 2 <<endl;
	}

	return 0;
}