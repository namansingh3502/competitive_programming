#include<iostream>
#include<vector>
using namespace std;

int main(){
	int length,operations;
	cin>>length>>operations;
	vector<int>	values(operations);
	vector<int> ans(operations);

	for(int i=0;i<operations;i++){
		cin>>values[i];
	}

	int left=0,right=0,start=length-values[1]+1;
	for(int i=0;i<operations;i++){
		int a=values[i];
		int range=length-a+1;
		if(range<=right){
				cout<<"c"<<range<<i<<endl;

			ans[i]=left+1;
			if(left>start){continue;}
			left=range+a-1;
		}
		else if(range>right){
			if(range>=length){
				cout<<"a"<<range<<i<<endl;
			ans[i]=length;
			right=range+a-1;
			}
			else{
			ans[i]=range;
				cout<<"b"<<range<<i<<endl;
			right=range+a-1;
			}
		}
	}
	
	for(int i=0;i<operations;i++){
		cout<<ans[i]<<" ";
	}

	return 0;
}