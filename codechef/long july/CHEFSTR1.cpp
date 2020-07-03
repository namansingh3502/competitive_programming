// July Long CHEFSTR1


#include<iostream>
using namespace std;

#define ll long long

void solve(){
	int n,last,next;
	cin>>n;

	ll ans = 0;
	cin>>last;
	for( int i = 1; i < n; i++ ){
		cin>>next;
		ans += abs(next - last) - 1;
		last = next;
	}
	cout<<ans<<endl;

}

int main(){
	int test;
	cin>>test;

	while(test--)
		solve();
	
	return 0;
}
