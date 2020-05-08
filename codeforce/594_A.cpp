#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include<utility>
#include<string>
using namespace std;

#define ll long long



void solve(){
	int n,m;

	cin>>n;
	ll x;
	ll odd=0,even=0,count=0;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x % 2)odd++;
		else even++;
	}

	cin>>m;	
	ll y;
	for(int i=0;i<n;i++){
		cin>>y;
		if(y % 2) count += odd;
		else count += even;
	}

	cout<<count<<endl;

}

int main(){
	int test;
	cin>>test;
	while(test--){
		solve();
	}
	return 0;
}