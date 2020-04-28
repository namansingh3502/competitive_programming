#include<iostream>
#include<string>
using namespace std;

#define ll long long

int main(){
	int test;
	cin>>test;
	while(test--){
		string str;
		cin>>str;
		int ones=0,zeros=0;

		for(int i=0;i<str.length();i++){
			if(str[i]=='0')zeros++;
			else ones++;
		}
		if(ones==str.length() || zeros==str.length()){
			cout<<str<<str;
		}
		else{
			for(int i=0;i<str.length();i++){
				cout<<"01";
			}
		}
		cout<<endl;
	}

	return 0;
}