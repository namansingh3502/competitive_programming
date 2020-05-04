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
	int n,p;
	cin>>n>>p;
	vector<bool> num(250,true);

	int x,count=0;
	for(int i=1; i<= p; i++){
		cin>>x;
		if(num[x]){
			num[x]=false;
			count++; 
		}
	}
	cin>>p;
	for(int i=1; i<= p; i++){
		cin>>x;
		if(num[x]){
			num[x]=false;
			count++; 
		}
	}
	if(n==count){
		cout<<"I become the guy.";
	}
	else{
		cout<<"Oh, my keyboard!";
	}

}

int main(){
	int test=1;
	//cin>>test;
	while(test--){
		solve();
	}
	return 0;
}