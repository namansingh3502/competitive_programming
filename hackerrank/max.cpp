#include<iostream>
using namespace std;

int maxi(int,int);
int main(){
	int arr[4],i;
	int max;

	for(i=0;i<4;i++){
		cin>>arr[i];
	}

	for(i=0;i<4;i++){
		max=maxi(max,arr[i]);
	}
	cout<<max;
}

int maxi(int a,int b){
int max;
	if(a>b){max=a;}
	else if(b>a){max=b;}

	return max;
}