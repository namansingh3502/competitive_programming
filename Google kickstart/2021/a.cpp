#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<math.h>
#include<algorithm>

using namespace std;

void solve(){

    int n,k;
    string str;
    vector< char > str2;

    int count = 0;

   cin>>n>>k>>str;

   auto it= str.end() - 1;

    for( int i = 0; i < n/2; i++ ){
        if( str[i] != *it ) count++;
        it--;
    }
    if( count == k ) cout<<0<<endl;
    else{
        cout<<abs(k - count)<<endl;
    }
}

int main(){

    int n;
    cin>>n;

    for( int i = 1; i <= n; i++ ){
		cout<<"Case #"<<i<<": ";
		solve();
	}
}