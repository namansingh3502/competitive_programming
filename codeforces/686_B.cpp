#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int solve(){
	int n;
	cin>>n;
	vector< int > arr( n + 1 );
	for( int i = 1; i <= n; i++ )
		cin>>arr[i];\

	sort(arr.begin(), arr.end());

	int a = 1,b = 1;
	cout<<arr[1]<<endl;

	/*for( ; a <= n; a++ ){
		if( arr[a] != arr[b] && a-b < 2 ){
			cout<<b<<endl;
			return 0;
		}
		if( arr[a] != arr[b] && a-b > 1 ) b = a;
	}
	cout<<-1<<endl;*/
	return 1; 
}	

int main(){
	int test;
	cin>>test;
	while( test-- )
		solve();
	return 0;
}
