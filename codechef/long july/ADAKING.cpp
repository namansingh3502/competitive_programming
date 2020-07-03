// long july ADAKING

#include<iostream>
#include<string>
using namespace std;

#define ll long long

void solve(){
	int k,n = 7;
	cin>>k;
	k--;

	cout<<'O';
	for( int i = 0; i < 8; i++ ) {
		for(int j = 0; j < n; j++ ){
			if( k > 0 ) cout<<'.';
			else cout<<"X";
			k--;
		}
		n = 8;
		cout<<endl;
	}

}

int main(){
	int test;
	cin>>test;

	while(test--)
		solve();
	
	return 0;
}