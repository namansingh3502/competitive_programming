#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;


void solve(){

	int a,b,m,n;
	cin>>a>>b;

	int count=0;

	if( b>a)cout<<1<<endl;
	else if( a==b) cout<<2<<endl;
 	else{
 		while( a ){
 			m = a/(b*b);
 			n = a/(b+1);

 			if( m>n ){
 				a = n;
 				b++;
 			} 		
 			else a = m;
 			count+=2;
 		}
	}

	cout<<count<<endl;

}

int main(){

	int test=1;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}