#include<iostream>
using namespace std;

void solution(){

	int arr[5] ;
	for( int i = 0; i < 5; i++ ) cin>>arr[i];

	if( arr[0] + arr[1] <= arr[3] && arr[2] <= arr[4] ) cout<<"YES";
	else if( arr[0] + arr[2] <= arr[3] && arr[1] <= arr[4] ) cout<<"YES";
	else if( arr[1] + arr[2] <= arr[3] && arr[0] <= arr[4] ) cout<<"YES";
	else cout<<"NO"<<endl;

	cout<<endl;

}

int main(){
	int test;
	cin>>test;

	while( test-- )
		solution();
	return 0;	
}