#include<iostream>

using namespace std;

void solve(){
    int n,u,d,r,l;
    cin>>n>>u>>r>>d>>l;

    if( u > 0 && r > 0 ){ u--; r--; }
    if( r > 0 && d > 0 ){ r--; d--; }
    if( d > 0 && l > 0 ){ d--; l--; }
    if( l > 0 && u > 0 ){ l--; u--; }

    if(0<=u && u<=n-2 && 0<=l && l<=n-2 && 0<=d && d<=n-2 && 0<=d && d<=n-2 )      
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

int main(){
    int test;
    cin>>test;
    
    while( test-- )
        solve();
   
}