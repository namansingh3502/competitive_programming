#include<iostream>
#include<string>

using namespace std;

int main(){

	int n,i;

	string str;

	cin>>n>>str;

	if( n % 2 ){
		cout<<str[0]<<str[1]<<str[2];
		i = 3;
	}
	else{
		cout<<str[0]<<str[1];
		i = 2;	
	}

	for( ; str[i]; i += 2 )
		cout<<"-"<<str[i]<<str[i+1];

	return 0;

}