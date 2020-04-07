#include<iostream>
using namespace std;

int num(int cord[],int i,int length){
	int val=0;

	for(int j=1;j<6;j++){
		if(cord[j+i]==1){
			val=1;
			break;
		}
		
	}
	return val;
}

int main(){
	int test;
	cin>>test;
	for(int t=0;t<test;t++){
		int length,ans=0;
		cin>>length;
		int cord[length];
		for(int i=0;i<length;i++){
			cin>>cord[i];
		}
		
		for(int i=0;i<length-1;i++){
			if(cord[i]==1){
				ans=num(cord,i,length);
				if(ans==1){break;}
			}
		}

		if(ans==1){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}

	}
	return 0;
}
