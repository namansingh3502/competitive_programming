#include<bits/stdc++.h>
using namespace std;

int main(){
	int neg=0,n,m;
	cin>>n>>m;
	int arr[n];

	for( int i = 0 ; i < n; i++ ){
		cin>>arr[i];
		if( arr[i] < 0 )
			neg++;
	}

	sort(arr, arr + n);
	int sum = 0;

	m = min( m , neg );
	
	for( int i = 0 ; i < m; i++ )
		sum += arr[ i ];
	
	cout<<abs(sum)<<endl;

	return 0;
}
