#include<iostream>
#include<vector>
#include<string>

using namespace std;

void solve(){
    int n;
    string str;

    cin>>n>>str;

    vector< int > ans;
    int count=1;

    for( int i = 0; str[i]; i++ ){
        ans.push_back(count);
        if( str[i+1] && ( str[i] < str[i+1]) )  count++;
        else count=1;
    }

    for( int i = 0; i < n; i++ )
        cout<<ans[i]<<" ";

}

int main() {

    int test;
    cin>>test;

    for( int i = 1; i <= test; i++ ){
        cout<<"Case #"<<i<<": ";
        solve();
        cout<<endl;
    }
}
