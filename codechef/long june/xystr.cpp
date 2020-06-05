//codechef long june  XYSTR

#include<bits/stdc++.h>
using namespace std;


void solve(){
	string str;
	cin>>str;

	int count = 0,n = str.length();

	for( int i = 0; i < n - 1; i++ ){
		if( str[ i ] != str[ i + 1 ] ){
			count++;
			i++;
		}
	}
	cout<<count<<endl;

}


int main(){
	int test;
	cin>>test;
	while( test-- )	
		solve();

	return 0;
}
