#include<iostream>
#include<string>
using namespace std;


int main(){
	int length,test;
	string first_str,sec_str,third_str;

	cin>>test;
	for(int i=0;i<test;i++){
		int match=0;
		cin>>first_str>>sec_str>>third_str;
		length=sec_str.length();

		for(int j=0;j<length;j++){
			if(third_str[j]==sec_str[j]){
				match++;
			}
			else if(third_str[j]==first_str[j]){
				match++;
			}
			else{cout<<"NO"<<endl;break;}
		}

		if(match==length){
			cout<<"YES"<<endl;
		}
	}
}
