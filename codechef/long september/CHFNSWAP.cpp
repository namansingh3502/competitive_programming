#include<iostream>

using namespace std;

#define ll long long
ll n;

ll search( ll left, ll right, n , total ){
	if( left < right ){
		ll mid = ( left + right ) / 2;
		ll l_sum = ((mid * ( mid+1 )) / 2);
		ll r_sum = total - l_sum;

		if( l_sum == r_sum )
			return 

	}


	else return -1;
}

void solve(){
	
	cin>>n;

	ll total = ( n * ( n+1 )) / 2;

	if( total % 2 == 1 ){
		cout<<0<<endl;
		return;
	}

	ll a = search( n/2, n, n, total );





}

int main(){
	int t;
	cin>>t;

	while(t--)
		solve();

	return 0;
}