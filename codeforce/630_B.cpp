#include<iostream>
#include<vector>
using namespace std;

int main(){
	int test;
	cin>>test;
	for(int t=0;t<test;t++){
		int length,count=0,num=1;
		cin>>length;

		int arr[length];
		int coding[length];
		vector<int> visited(length,0);
		int prime[]={2,3,5,7,11,13,17,19,23,29,31};


		for(int i=0;i<length;i++){
			cin>>arr[i];
		}

		for(int i=0;i<11;i++){
			int div=prime[i];
			int pairs=0;
			for(int j=0;j<length;j++){
				if(arr[j]%prime[i]==0 && visited[j]==0){
					pairs++;
					coding[j]=num;
					visited[j]=1;
				}
			}
			if(pairs>0){
				count+=pairs;
				num++;
			}
			if(count==length){
				break;
			}
		}
		cout<<--num<<endl;
		for(int i=0;i<length;i++){
			cout<<coding[i]<<" ";
		}
		cout<<endl;

	}
}