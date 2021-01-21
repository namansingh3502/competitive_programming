#include<iostream>
using namespace std;

void solve(){

	int sum=0,n,x,k;

	cin>>n>>k;
	for( int i = 0; i < n; i++ ){
		cin>>x;
		sum += x;
	}
			
	if( sum % k == 0 ) cout<<0<<endl;
	else {
		cout<<1<<endl;
	}

}

int main(){
	int test;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}