#include<iostream>

using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;

    if( n >= k ){
        if( n % k ) cout<<2<<endl;
        else cout<<1<<endl;
    }
    else{
        int ans = k/n + (k%n != 0 );
        cout<<ans<<endl;
    }

}

int main(){
    int test;
    cin>>test;

    while( test-- )
        solve();

    return 0;
}