#include<iostream>
#include<algorithm>


using namespace std;

#define ll long long

ll MAX = 1e9 + 5;

void solve (){

	ll n,k,x,ans=-1,count = MAX;

	cin>>n>>k;

	for( int i = 0; i < n; i++ ){
		cin>>x;
		if( k % x == 0 && (k/x) < count ){

			count = k / x ;
			ans = x;
		}
	}

	if( count == MAX ) cout<<-1<<endl;
	else cout<< ans << endl;
}



int main(){

	int t;

	cin>>t;

	while( t-- )
		solve();

	return 0;
}