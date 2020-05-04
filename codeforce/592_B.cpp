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
	int n;
	cin>>n;
	string str;
	cin>>str;

	int i = 0,j = n-1,l=0,r=0;
	while(str[i]=='0'){
		if(str[i]=='0')l++;
		i++;
	}
	while(str[j]=='0'){
		if(str[j]=='0')r++;
		j--;
	}

	if(l != n){
		int total = 2 * (n - min(l,r));

		cout<<total<<endl;
	}
	else{
		cout<<n<<endl;
	}
}

int main(){
	int test;
	cin>>test;
	while(test--){
		solve();
	}
	return 0;
}