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
#define ll long long


void solve(){

	ll n,m,x;
	cin>>n>>m;

	vector<int> arr(n),one,two;

	for(int i = 0; i < n; i++ ) cin>>arr[i];

	for( int i = 0; i < n; i++ ) {
		cin>>x;
		if(x == 1) one.push_back(arr[i]);
		else two.push_back(arr[i]);
	}

	int count=0,ans=-1;

	sort(one.rbegin(),one.rend());
	sort(two.rbegin(),two.rend());

	int j=0;

	for(int i = 0; i < one.size() && m > 0; ){
		if( m > one[i] && j < two.size() ){
			if( two[j] > one[j] + one[j+1] ){
				j++;
				m -= two[j];
			}
			else{
				i += 2;
				m -= one[i] + one[i+1];
			}
			count += 1;
		}
		else{
			count += 1;
			m -= one[i];
			i++;
		}
	}

	while( m > 0 && j <= two.size() ){
		count += 2;
		j++;
		m -= two[j];
	}

	if( count != 0 )cout<<count<<endl;
	else cout<<-1<<endl;

}

int main(){

	int test=1;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}