#include<iostream>
using namespace std;

void solve(){
	int n,i=1;
	cin>>n;

	if( n % 2 ){
		cout<<"2 3 1 ";
		i = 4;
	}
	for( ; i <= n; i += 2 ){
		cout<<i+1<<" "<<i<<endl;
	}
}

int main(){
	int test;
	cin>>test;

	while( test-- )
		solve();

	return 0;	
}