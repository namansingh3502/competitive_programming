#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

	int n,a,b,sum=0;

	cin>>n;
	vector< int > num(n);

	for( int i = 0; i < n; i++ ){
		cin>>num[i];  sum += num[i];
	}

	sort( num.begin(), num.end() );

	cout<<num[0]<<" "<<num[1];


	return 0;
}