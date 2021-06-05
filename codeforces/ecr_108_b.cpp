#include<iostream>
#include<vector>

using namespace std;
int n,m,k;

int dp( int x, int y, int cost ){

    if( x > n || y > m ) return 0;

    if( cost == k && n == x && m == y ) return 1;

    if( dp( x+1, y, cost+y ) )   return 1;

    if( dp( x, y+1, cost+x ) )   return 1;

    return 0;

}

void solve(){

    cin>>n>>m>>k;

    int ans = dp( 1, 1, 0 );

    if( ans == 1 ) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

int main(){
    int test;
    cin>>test;

    while( test-- )
        solve();

    return 0;
}