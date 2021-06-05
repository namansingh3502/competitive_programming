#include<iostream>
#include<vector>
#include<string>

using namespace std;

#define ll long long

void solve(){
     ll r,b,d,mn,mx;

     cin>>r>>b>>d;

     mn = min( r, b);
     mx = max( r, b);

     if( (d+1)*mn >= mx ) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;

}

int main(){
    int test;
    cin>>test;

    while( test-- )
        solve();

    return 0;
}
