#include<iostream>
#include<string>
#include<vector>

using namespace std;

void solve(){

    int n;
    string str, ans="";

    cin>>str;
    n = sizeof( str );

    for( int i = 0; str[i]; i++ ){
        if( i % 2 ){
            if( str[i] == 'z') ans += 'y';
            else ans += 'z';
        }
        else{
            if( str[i] == 'a') ans += 'b';
            else ans += 'a';
        }
    }

    cout<<ans<<endl;

}



int main(){
    int test;
    cin>>test;

    while( test-- )
        solve();
}
