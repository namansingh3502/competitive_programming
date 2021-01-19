#include<iostream>
#include<vector>
using namespace std;

void solve(){
	int n,count=0;
	cin>>n;

	vector< int > inp(n);
	vector< int > value(n);

	for( int i = 0; i < n; i++ ) cin>>inp[i];

	for( int i = 1; i < n-1; i++ ){
		if( inp[i-1] > inp[ i ] && inp[i+1] > inp[ i ] ){
			value[i] = -1;
			count++;
		}
		else if( inp[i-1] < inp[ i ] && inp[i+1] < inp[ i ] ){
			count++;
			value[ i ] = 1;
		}
		else{
			value[ i ] = 0;
		}
	}

	int ans=1;

	for( int i = 1; i < n-1; i++ ){

		if((value[i-1] == 1 && value[i] == -1 ) && value[i+1] == 1 ){
			ans = 3;
			break;
		}
		else if((value[i-1] == -1 && value[i] == 1) && value[i+1] == -1){
			ans = 3;
			break;
		}
	}

	if( ans == 1 ){
		for( int i = 1; i < n; i++ ){

			if( value[i-1] == -1 && value[i] == 1 ){
				ans = 2;
				break;
			}
			else if( value[i-1] == 1 && value[i] == -1 ){
				ans = 2;
				break;
			}
		}
	}

	if( count == 0 ) ans = 0;

	cout<<count-ans<<endl;
}

int main(){
	int test;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}