#include<iostream>
#include<string>
using namespace std;

void solve(){

	int n,s_odd=0,p_odd=0;
	string s,p;

	cin>>n;
	cin>>s>>p;

	for( int i = 0; i < n; i++ ){
		if( s[i] == '1' ) s_odd++;

		if( p[i] == '1' ) p_odd++;

	}

	if( s_odd == p_odd)
		cout<<"Yes"<<endl;

	else cout<<"No"<<endl;

}

int main(){
	int test;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}