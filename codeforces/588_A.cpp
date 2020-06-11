#include<iostream>
using namespace std;

int main(){
	int arr[4],sum=0,i,max=0,ans=0;
	for( i=0;i<4;i++){
		cin>>arr[i];
		sum+=arr[i];
		if(arr[i]>max){max=arr[i];}
	}
	if(sum%2!=0){cout<<"No";}
	else{
		for(i=1;i<4;i++){
			if(arr[0]+arr[i]==sum/2){
				ans=1;
				break;
			}
		}
		if(ans!=1){
			if(i==4 && sum/2==max){ans=1;}
		}
		if(ans==1){
			cout<<"Yes";
		}
		else{
			cout<<"No";
		}
	}

}