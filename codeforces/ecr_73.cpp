#include<iostream>
#include<algorithm>

using namespace std;

void solve(){
	int a,b,c;
	cin>>a>>b>>c;
	cout<<min( min(a,b), (a+b+c)/ 3)<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}