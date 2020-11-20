#include<iostream>

using namespace std;

void solve(){
	int n,zero,one,change,count_zero=0,count_one=0;
	cin>>n>>zero>>one>>change;

	char x;
	for( int i = 0; i < n; i++ ){
		cin>>x;
		if( x == '0' ) count_zero++;
		else count_one++;
	}

	if( one > change + zero ){
		cout << n * zero + count_one * change << endl;
	}
	else if( zero > change + one ){
		cout << n * one + count_zero * change << endl;
	}
	else{
		cout << count_one * one + count_zero * zero <<endl;
	}

}

int main(){
	int test;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}