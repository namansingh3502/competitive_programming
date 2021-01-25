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

	int n,k;
	cin>>n>>k;
	k *= 100;

	int a,b;

	vector<int> sum(n);

	for( int i = 0; i < n; i++ ){
		cin>>a>>b;
		sum[i]= a * b;
	}

	int total=0, ans=-1;

	for( int i = 0; i < n; i++ ){
		total += sum[i];
		if( total > k ){
			ans = i+1;
			break;
		}
	}

	cout<<ans<<endl;

}

int main(){

	int test=1;
	//cin>>test;

	while( test-- )
		solve();

	return 0;
}