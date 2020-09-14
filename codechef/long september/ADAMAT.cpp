#include<iostream>
#include<vector>

using namespace std;

void solve(){

	int n,x,count=0,a=0;
	cin>>n;
	vector< vector< int > > num( 2, vector< int > ( n + 1 ) );



	for( int i = 1; i <= n; i++ )  cin>>num[0][i];
	
	num[1][1] = num[0][1]; 

	for( int i = 2; i <= n; i++ ){
		cin>>num[1][i];
		for( int j = 1; j < n; j++ )
			cin>>x;
	}

	for( int i = n; i > 0; i-- ){
		if( num[a][i] != i ){
			a = (a + 1) % 2;
			count++;
		}
	}

	cout<<count<<endl;

}

int main(){
	int t;
	cin>>t;

	while(t--)
		solve();
	return 0;
}