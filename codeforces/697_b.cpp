#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

#define ar array<int, 2>
#define pii pair<int, int>
#define pb push_back
#define vt vector
#define For(i, n) for (int i = 0; i < n; i++)
#define Rev(i, n) for (int i = n - 1; i >= 0; i--)
#define FOR(i, n) for (int i = 1; i <= n; i++)
#define REV(i, n) for (int i = n; i >= 1; i--)
#define Rep(i, a, b) for (int i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve(){

	int n,value,a=2020,b=2021,ans=0;
	cin>>n;

	for( int i = 0; i*a <= n; i++ ){
		value = n - ( a * i );
		if( value % b == 0 ) {
			ans = 1;
			break;
		}
	}

	if( ans == 1 ) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

}

int main(){

	int test=1;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}