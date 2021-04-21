#include<iostream>
#include<vector>

using namespace std;

#define ll long long

void solve(){
    int n,m,k,x;
    cin>>n>>m>>k;

    vector< vector< int > > row( n+1, vector<int> (m+1,0));
    vector< vector< int > > col( n+1, vector<int> (m+1,0));

    for( int i = 0; i < n; i++ )
        for( int j = 0; j < m; j++ ) {
            cin>>x;
            row[i+1][j+1] = row[i+1][j] + x ;
            col[i+1][j+1] = col[i][j+1] + x ;
        }

    int sq=min(n,m), ans = 0, sum;


    for( int i = 0; i < n; i++ )
        for( int j = 0; j < n; j++ )
            sum=0;
            for( int a; a < sq; a++ ){
                if( i+a > n || j+a > m ) break;

                sum = sum+


            }


}

int main(){
    int test;
    cin>>test;

    while( test-- )
        solve();

    return 0;
}
