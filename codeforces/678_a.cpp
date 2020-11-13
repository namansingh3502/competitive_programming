#include<iostream>

using namespace std;

void solve(){
	int a,b,x,sum=0;
	cin>>a>>b;
	for( int i = 0; i < a; i++ ){
		cin>>x;
		sum+=x;
	}
	if( sum == b )
		cout<<"YES"<<endl;
	else{
		cout<<"NO"<<endl;
	}
}

int main(){
	int test;

	cin>>test;

	while(test--)
		solve();

	return 0;
}