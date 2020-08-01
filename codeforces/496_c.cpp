#include<iostream>
#include<map>
#include<iterator>
#include<math.h>

using namespace std;

int main(){

	int n,x,a,b,check=0,ans=0;
	map < int, int > odd;
	map < int, int > even;

	cin>>n;

	for( int i = 0; i < n; i++ ){
		cin>>x;
		if( x % 2 ) odd[x]++;
		else even[x]++;
	}

	for( auto itr = odd.begin(); itr != odd.end(); itr++ ){
		a = itr->first;
		check = 0;

		for( int i = 0; i < 34; i++ ){

			b = pow( 2, i ) - a;
			if( b == a && odd.find(b) != odd.end() )
				if( odd[b] > 1 ){
					check = 1;  break; 
				}
			if( b != a && odd.find(b) != odd.end() ){
				check = 1;  break; 
			}
		}

		if( check == 0 )  ans += odd[a];
	}

	for( auto itr = even.begin(); itr != even.end(); itr++ ){

		a = itr->first;
		check = 0;

		for( int i = 0; i < 34; i++ ){

			b = pow( 2, i ) - a;
			if( b == a && even.find(b) != even.end() )
				if( even[b] > 1 ){
					check = 1;  break; 
				}
			if( b != a && even.find(b) != even.end() ){
				check = 1;  break; 
			}
		}
		if( check == 0 )  ans += even[a];
	}
	
	cout<<ans<<endl;

	return 0;
}