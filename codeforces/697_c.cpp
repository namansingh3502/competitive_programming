#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>
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

vector< int > boys(10000005),girls(10000005);

void solve(){

	int a,b,k;
	cin>>a>>b>>k;

	map<int ,int > boy,girl;

	for( int i = 0; i < k; i++ ){
		cin>>boys[i];
		boy[boys[i]]++;
	}

	for( int i = 0; i < k; i++ ){
		cin>>girls[i];
		girl[girls[i]]++;
	}

	int ans = 0, count = 0;

	for( int i = 0; i < k; i++ )
		ans += k - girl[girls[i]] - boy[boys[i]] + 1;

	cout<<ans/2<<endl;
}

int main(){

	int test=1;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}