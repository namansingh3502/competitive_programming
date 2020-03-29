#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n,k,j=0,diff;
	string str1;
	cin>>n>>k>>str1;
	diff=n-k;
	int str2[diff];

	if(n==k){
		for(int i=0;i<n;i++){
			cout<<'0';
		}
	}
	else{
		for(int i=k;i<n;i++){
			str2[j]=(int)str1[i]-48;
			j++;
		}
		int ans=1;
		for(int i=1;i<k;i++){
			ans*=10;
		}
		cout<<ans;
		for (int i=0;i<diff;i++){
			cout<<str2[i];
		}
	}
}