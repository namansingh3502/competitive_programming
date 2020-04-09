#include<iostream>
using namespace std;

#define ll long long
int main(){
	int test;
	cin>>test;
	for(int t=0;t<test;t++){
		int ans=0;
		ll prime,total;

		cin>>total>>prime;
		if(prime==1){if(total>1){ans=1;}}
		
		if(prime%2==0){
			if(total=(prime*2)){
				ans=1;
			}
			else if(total>=((prime+1)*2)){
				ans=1;
			}
		}
		
		cout<<ans<<endl;

	}

}