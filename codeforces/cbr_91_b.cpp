#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(){

	int num=0;

	string str;
	cin>>str;

	unordered_map< int , int > count;
	
	for( int i = 0; str[i]; i++ ){

		if( str[i] == '4' || str[i] == '7' ){
			num *= 10;
			num += str[i] - '0';
			count[ num ] += 1;
		}
		else num = 0;

	}

}