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
	int length,test;
	cin>>length>>test;

	string str;
	vector<int> chars(26+1,0);
	cin>>str;
	
	for(int i=0; i<length; i++){
		int ans=(int)str[i]-96;
		chars[ans]++;		
	}
	while(test--){
		int max;
		ll wait=0;
		cin>>max;
			for(int i=1;i<=26;i++){
				if(chars[i]>max){
					wait += ( chars[i] - max);
				}
			}
			cout<<wait<<endl;
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