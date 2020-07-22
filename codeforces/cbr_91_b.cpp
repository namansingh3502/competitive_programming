#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(){

	string str;
	int arr[]={0,0};

	cin>>str;

	for( int i = 0; str[i]; i++ ){
		if( str[i] == '4' ) arr[ str[i] % 2 ]++;
		else if( str[i] == '7' ) arr[ str[i] % 2 ]++;
	}

	if( arr[0] >= arr[1] && arr[0] != 0 ) cout<<'4'<<endl;
	else if( arr[1] > arr[0] ) cout<<'7'<<endl;
	else cout<<-1<<endl;

	return 0;

}