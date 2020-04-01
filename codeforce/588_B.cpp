#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int length,change=0,count=0;
	string number;

	cin>>length>>change>>number;
	if(change!=0){
		if(length==change){
		cout<<'0';
		}
	else{
		if(number[0]!='1'){
			number[0]='1';
			count++;
		}
		if(count!=change){
			for(int i=1;i<length;i++){
			if(number[i]!='0'){
				number[i]='0';
				count++;
			}
			if(count==change){
				break;
			}
		}}	
		cout<<number;
	}}
	else{cout<<number;}
}
