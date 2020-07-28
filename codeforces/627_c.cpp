#include<iostream>
#include<string>
#include<algorithm>

using namespace std;



void solve(){

	string str;
	cin>>str;
	str += "R";
	int a = -1,mx = 0;

	for( int i = 0; str[i]; i++ ){
		if( str[i] == 'R' ){
			mx = max( mx, i - a );
			a = i;
		}
	}

	cout<<mx<<endl;

}

int main(){

	int t;
	cin>>t;

	while(t--) solve();

	return 0;
}