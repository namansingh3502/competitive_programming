#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<math.h>
#include<algorithm>

using namespace std;
int count=0;


void solve(){

    int r,c;
    count = 0;

    cin>>r>>c;

    vector< vector< int > > graph( r, vector< int > (c) );

    for( int i = 0; i < r; i++ )
        for( int j = 0; j < c; j++ )
            cin>>loc[i][j];
        
    for( int i = 0; i < r; i++ )
        for( int j = 0; j < c; j++ ){

            if( (i-1 > 0 && i-1 == 1) || (j+1 < c && j+1 == 1) || (j-1 > 0 && j-1 == 1) || (j+1 < c && j+1 == 1)   )
                check( graph, i,j);

        }

}

int main(){

    int n;
    cin>>n;

    for( int i = 1; i <= n; i++ ){
		cout<<"Case #"<<i<<": ";
		solve();
	}
}