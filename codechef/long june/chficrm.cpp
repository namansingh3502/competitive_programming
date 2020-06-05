
//codechef long june  CHFICRM

#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n,x,five = 0,ten = 0, ans = 0;;
	cin>>n;
	for( int i = 0; i < n; i++ ){
		cin>>x;

		if( x == 5 ) five++;		// take rs 5

		else if( x == 10 ){
			if( five == 0 ){		// no change
				ans = 1;
			}
			else {
				ten++;				// take rs 10
				five--;				// give rs 5
			}
		}

		else if( x == 15 ){
			
			if( ten != 0 || five > 1 ){
				if( ten > 0 ){
					ten--;			// give rs 10 take rs 15
				}
				else{
					five -= 2;		// give to rs 5 coin take rs 15
				}
			}

			else ans = 1;			// no change
		
		}
	}

	if( ans )
		cout<<"NO"<<endl;
	else 
		cout<<"YES"<<endl;
	
}


int main(){
	int test;
	cin>>test;
	while( test-- )	
		solve();

	return 0;
}