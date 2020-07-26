#include<iostream>
#include<string>

using namespace std;

int main(){

	int n,arr[]={0,0,0};
	string str;

	cin>>n;
	cin>>str;

	for( int i = 0; i < n; i++ ){
		if( str[i] == 'A' ) arr[0]++;
		else if( str[i] == 'F' )  arr[1]++;
		else if( str[i] == 'I' )  arr[2]++;
	}

	if( arr[2] > 1 ) cout<<0<<endl;
	else if( arr[2] == 1 ) cout<<1<<endl;
	else cout<<arr[0]<<endl;

	return 0;
}