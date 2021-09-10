#include<iostream>
#include<limits.h>

#define ll long long

using namespace std;

void solution(){
	ll n;
	cin>>n;

	ll cord[n][2];

	for( ll i = 0; i < n; i++ ) cin>>cord[i][0];
	for( ll i = 0; i < n; i++ ) cin>>cord[i][1];

	ll diff_x,diff_y,count,ans=LLONG_MAX;

	for( ll i = 0; i < n; i++ ){
		count=0;
		for( ll j = 0; j < n; j++ ){

			diff_x = cord[j][0] - cord[i][0];
			diff_y = cord[j][1] - cord[i][1];

			if( diff_y == diff_x && diff_x == 0 ) continue;
			else if( diff_y == diff_x ) count++;
			else if( diff_y + diff_x == 0 ) count++;
			else if( diff_y != diff_x ){
				if( diff_y == 0 || diff_x == 0 ) count++;
				else count += 2;
			}
		}
		ans = min( ans, count );
	}
	cout<<ans<<endl;
}

int main(){
	ll test;
	cin>>test;


	while( test-- )
		solution();

	return 0;
}