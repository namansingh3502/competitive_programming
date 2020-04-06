#include<iostream>
using namespace std;

int main(){
	string s;
	int length,changes;

	cin>>length>>changes>>s;

	if(length==1 && changes==1){
		cout<<'0';
		return 0;
	}
	if(changes!=0){
		if(s[0]!='1'){
			s[0]='1';
			changes--;
		}
		for(int i=1;i<=length;i++){
				if(changes==0){
					break;}
				if(s[i]!='0'){
				s[i]='0';
				changes--;}

		}
	}
	cout<<s;
	return 0;
}