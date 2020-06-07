//codechef long june  EOEO

#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll arr[65];

void solve(){
	ll ts,ans;
	cin>>ts;

	if( ts % 2 )
		ans = ts / 2;

	else{
		ll num = ts;
		int count = 0;
		while( num % 2 == 0 ){
			count++;
			num /= 2;
		}

		count++;

		num = pow( 2 , count );
		ans = ts / num;
		
	}
	
	cout<<ans<<endl;	
}


int main(){
	int test;
	cin>>test;

	arr[0] = 1;
	arr[1] = 2;

	for( int i = 2; i < 65; i++ ){
		arr[i] = arr[ i - 1 ] * 2;
	}

	while( test-- )	
		solve();

	return 0;
}
