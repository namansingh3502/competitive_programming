#include<iostream>
#include<vector>
using namespace std;

int main(){

	int n,mn=10000,ans=1;
	cin>>n;

	int speed[n], ram[n], hdd[n], price[n];
	vector< int > out( n , 1 );

	for( int i = 0; i < n; i++ ){
		cin>>speed[i]>>ram[i]>>hdd[i]>>price[i];
	}

	for( int i = 0; i < n; i++ ){
		if( out[i] )
			for( int j = i+1; j < n; j++ )
				if( out[j] ){
					if( speed[i] < speed[j] && ram[i] < ram[j] && hdd[i] < hdd[j] )
					out[i]=0;

					if( speed[i] > speed[j] && ram[i] > ram[j] && hdd[i] > hdd[j] )
					out[j]=0;
				}
	}

	for( int i = 0; i < n; i++ ){
		if( mn > price[i] && out[i] == 1 ){
			mn = min( mn, price[i] );
			ans = i + 1;
		}
	}

	cout<<ans<<endl;

	return 0;
}