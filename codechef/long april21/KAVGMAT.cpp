#include<iostream>
#include<vector>

using namespace std;

void solve() {
    int n,m,k,x;
    cin>>n>>m>>k;

    vector< vector< int >> row(n+1, vector<int> (m+1));
    vector< vector< int >> col(n+1, vector<int> (m+1));

    for( int i = 1; i <= n; i++ )
        for( int j = 1; j <= m; j++ ){
            cin>>x;
            row[i][j] = row[i][j-1] + x;
            col[i][j] = col[i-1][j] + x;


}

int main(){

    int test;
    cin>>test;

    while( test-- )
        solve();

}
