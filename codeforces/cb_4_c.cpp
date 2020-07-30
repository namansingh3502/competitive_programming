#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(){

	int q;
	string str;
	unordered_map< string, int > count;

	cin>>q;
	while( q-- ){
		cin>>str;

		if( count[str] ) cout<<str<<count[str]<<endl;
		else cout<<"OK"<<endl;
		count[str]++;	
	}

	return 0;
}