#include<iostream>
using namespace std;
#define ll long long
int main(){
	int test;
	cin>>test;
	for(int t=0;t<test;t++){
		ll num;
		cin>>num;
		ll ans=(num/2)*2+num%2;
		cout<<ans<<endl;
	}
	return 0;
}