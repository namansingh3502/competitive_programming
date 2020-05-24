#include<bits/stdc++.h>
using namespace std;

int MAX = 1e4 + 5;
#define ll long long

void solve(){
	int n;
	cin>>n;

	char odd = '7';
	char even = '1';
	
	string str;

	if( n % 2 )	str = odd;
	else str = even;

	for(int i = 1; i < n / 2; i++){
		str += even;
	}

	cout<<str<<endl;
}



int main(){
	int test;
	cin>>test;
	while(test--)
		solve();

	return 0;
}
