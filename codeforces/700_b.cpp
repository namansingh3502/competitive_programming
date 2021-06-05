#include<iostream>
#include<string>
#include<vector>

#define ll long long

using namespace std;

void solve(){

    ll b;
    ll a,n;
    cin>>a>>b>>n;

    vector< int > attack(n), health(n);

    for( int i = 0; i < n; i++ )  cin>>attack[i];
    for( int i = 0; i < n; i++ )  cin>>health[i];

    int mx=0;
    ll damage=0;

    for( int i = 0;i < n; i++ ){
        damage += attack[i] * ( health[i] / a + (health[i] % a != 0) );
        mx = max( mx, attack[i] );
    }

    if (damage - mx < b)cout << "YES\n";
    else cout << "NO\n";

}

int main(){
    int test;
    cin>>test;

    while( test-- )
        solve();
}
