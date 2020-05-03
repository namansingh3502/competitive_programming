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
	long long n,m,a;
	cin>>n>>m>>a;
	long long b,c;
	if( n % a ){
		b = (n/a)+1;
	}
	else b = n/a;

	if( m % a ){
		c = (m/a)+1;
	}
	else c = m/a;

	cout<< b*c;
}

int main(){
	int test=1;
	//cin>>test;
	while(test--){
		solve();
	}
	return 0;
}