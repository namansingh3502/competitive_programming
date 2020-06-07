//codechef long june  EVENM

#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
	int even = 2, odd = 1;
	int i,j,n;
	char l = 'e';
	cin>>n;

	for ( i = 0; i < n; i++ ){
		for( j = 0; j < n; j++ ){
			if( l == 'o' ){
				cout<<even<<" ";
				even += 2;
				l = 'e';
			}
			else{
				cout<<odd<<" ";
				odd += 2;
				l = 'o';
			}
		}
	
		if( n % 2 == 0 ){
			if( l == 'o' ) l = 'e';
			else l = 'o';
		}

		cout<<endl;
	}
}


int main(){
	int test;
	cin>>test;

	while( test-- )	
		solve();

	return 0;
}