#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string a,b;
	char temp;

	getline(cin,a);
	getline(cin,b);

	cout<<a.size()<<" "<<b.size()<<endl;
	cout<<a+b<<endl;

	temp=a[0];
	a[0]=b[0];
	b[0]=temp;

	cout<<a<<" "<<b;
	return 0;
}