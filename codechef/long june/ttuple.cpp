//codechef long june  TTUPLE 

#include<bits/stdc++.h>
using namespace std;

#define ll long long
int in_a[3],in_b[3],x,q[3],d[3],r[3],diff = 0;

bool check( int a,int b, int c, int d){
	return a == b == 0 && a == b;
}

bool prod(){

	int a = 


}



void solve(){


	cin>>in_b[0]>>in_b[1]>>in_b[2];				// starting condition
	cin>>in_a[0]>>in_a[1]>>in_a[2];				// target condition
	
	for( int i = 0; i < 3; i++ ){
		if( in_a[i] != in_b[i] )
			diff++;
		q[i] = in_a[i] / in_b[i];
		d[i] = in_a[i] - in_b[i];
		r[i] = in_a[i] % in_b[i];
	}

	if( diff == 0 )
		cout<<0<<endl;

	else if( diff == 1 )
		cout<<1<<endl;

	else if( diff == 2 ){

		int arr[2],j=0;
		for( int i = 0; i < 3; i++ ){				
			if( in_a[i] != in_b[i] ){
				arr[j] = i;j++;
			}
		}

		if( (r[ arr[0] ] == r[ arr[1] ] == 0) && (q[ arr[0] ] == q[ arr[1] ]) ){			
				cout<<1<<endl;							
		}

		else if( d[ arr[0] ] == d[ arr[1] ] ){
			cout<<1<<endl;
		}

		else cout<<2<<endl;
	}

	else{
	
		if( (r[0] == r[1] == r[2] == 0) && (q[0] == q[1] == q[2])){
				cout<<1<<endl;
		}

		else if( d[0] == d[1] == d[2] ){
			cout<<1<<endl;
		}

		else if( d[0] == d[1] || d[1] == d[2] || d[2] == d[0] ){
			cout<<2<<endl;
		}
		
		else if( check(r[0],r[1],q[0],q[1]) || check(r[1],r[2],q[1],q[2]) || check(r[0],r[2],q[0],q[2]) ){		
			cout<<2<<endl;
		}

			// if on multiplying any two with a number remainder for all three becomes same
		
		else if( prod() ){
				cout<<2<<endl;
		}

			//   if on adding something makes the remainder zero for all and
			//   quotient equal to the smallest quotient
		else{



			int l = min( q[0], min( q[1], q[2] )), ans = 1;

			for( int i = 0; i < 3; i++ )
				if( in_a[i] / l < in_b[i] ){
					ans = 0; break;
				}

			if( ans == 0 ){
				cout<<3<<endl;
			}
			else{
				if( (d[0] % l == d[1] % l || d[1] % l == d[2] % l) || d[0] % l == d[2] % l ){
					cout<<2<<endl;
				}
			}
		}
	}

}


int main(){
	int test;
	cin>>test;

	while( test-- )	
		solve();

	return 0;
}