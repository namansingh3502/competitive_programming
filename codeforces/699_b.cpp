#include<iostream>
#include<vector>

using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> height(n);

    for( int i = 0; i < n; i++ ) cin>>height[i];

    int left,right,flag=1;
    
    for( int i = 0;  i < n-1; i++ ){
        if( height[i] < height[i+1]){
            right = i;

            while()
        
        }

    }
}

int main(){
    int test;
    cin>>test;

    while( test-- )
        solve();
}