#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int arr[3],test,count=0;
	
	cin>>test;

	for(int t=0;t<test;t++){

		count=0;
		cin>>arr[0]>>arr[1]>>arr[2];
		
		if(arr[0]>=1){arr[0]--;count++;}
		if(arr[1]>=1){arr[1]--;count++;}
		if(arr[2]>=1){arr[2]--;count++;}
		

		sort(arr, arr+3, greater<int>());

		for(int i=0;i<2;i++){
			for(int j=i+1;j<3;j++)
				if(arr[i]!=0 && arr[j]!=0){
					arr[i]--;arr[j]--;count++;
				}
		}
		if(arr[0]>=1 && arr[1]>=1 && arr[2]>=1){
		arr[0]--;arr[1]--;arr[2]--;count+=1;count++;
		}
		cout<<count<<endl;
	}
	return 0;
}