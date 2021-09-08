#include<iostream>
using namespace std;


void solution(){

	int id, is, one=0, length;
	string str;

	cin>>length>>id>>is;
	cin>>str;

	for( int i = 0; i < length; i++ ) if( str[i] == '1' ) one++;

	cout<<((length-one)*id)+(is*one)<<endl;

}

int main(){
	int test;
	cin>>test;

	while( test-- )
		solution();

	return 0;
}