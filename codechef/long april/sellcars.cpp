#include<iostream>
#include<algorithm>
using namespace std;

#define ll long long


int main(){
	int test;
	cin>>test;
	for(int t=0;t<test;t++){

		ll quantity;
		cin>>quantity;
		
		ll price[quantity],sum=0;
		
		for(ll i=0;i<quantity;i++){
			cin>>price[i];
		}
	
		sort(price,price+quantity,greater<ll>());

		ll i=0;

		while(price[i]>i && i<quantity){
			sum=((sum)%(1000000007)+(price[i]-i)%(1000000007))%(1000000007);
			i++;
		}
		cout<<sum<<endl;		
	}
}