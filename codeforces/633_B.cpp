#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define ll long long

int main(){
	int test;
	cin>>test;
	for(int t=0;t<test;t++){
		ll length,mid;
		cin>>length;
		vector<ll> value(length+1);
		vector<ll> ans;

		for(ll i=1;i<=length;i++){
			cin>>value[i];
		}

		sort(value.begin()+1,value.end());

		if(length%2){
			mid=(length/2)+1;
			ans.push_back(value[mid]);
			for(ll i=1;i<=length/2;i++){
				ans.push_back(value[mid+i]);
				ans.push_back(value[mid-i]);
				
			}
		}

		else{
			mid=length/2;
			for(ll i=1;i<=length/2;i++){
				ans.push_back(value[mid+i]);
				ans.push_back(value[mid-i+1]);
				
			}
		}	

		for(ll i=0;i<length;i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}