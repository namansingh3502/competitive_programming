#include<iostream>
using namespace std;

void steps(int sum,int product,int zeros){
	if(product==0){
		if((sum+zeros)!=0){
			cout<<zeros<<endl;
		}
		else{cout<<(zeros+1)<<endl;}
	}
	if(product!=0){
		cout<<1<<endl; 
	}
}

int main(){
	int num,test,size,sum,product,zeros;
	cin>>test;
	for(int i=0;i<test;i++){
		cin>>size;
		sum=0;product=1,zeros=0;
		for(int j=0;j<size;j++){
			cin>>num;
			sum+=num;
			product*=num;
			if(num==0){zeros++;}
		}

		if(sum==0||product==0){steps(sum,product,zeros);}
		else{cout<<"0"<<endl;}
	}

	return 0;
}