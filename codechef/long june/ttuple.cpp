//codechef long june  TTUPLE 

#include<bits/stdc++.h>
using namespace std;

#define ll long long
int in_a[3],in_b[3],x,q[3],d[3],r[3],diff = 0;

bool check( int a,int b, int c, int d){
	return a == b == 0 && a == b;
}

bool prod(){
	int a,count=0;
	for( int i = 0; i < 3; i++ ){
		count = 0;
		for( int j = 0; j < 3; j++ ){
			a = ( in_a[j] - r[i] ) %  in_b[j];
			if ( a == 0 ){
				count++;
			}
		}
		if( count == 3 ){return true;}
	}
	return false;
}

bool sum(){
	int a,b,c,count=0;
	int least = min( q[0], min( q[1], q[2] )), ans = 1;

	a = in_a[0] % least;
	b = in_a[1] % least;
	c = in_a[2] % least;

	if( a == b && c == 0 )
		return true;
	else if( a == c && b == 0 )
		return true;
	else if( b == c && a == 0 )
		return true;

	else return false;
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
	
		if( (r[0] == r[1] == r[2] == 0) && (q[0] == q[1] && q[1] == q[2])){
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
		
		else if( prod() ){
				cout<<2<<endl;
		}

			//   if on adding something makes the remainder zero for all and
			//   quotient equal to the smallest quotient
		else if( sum() ){
			cout<<2<<endl;
		}
		else{
			cout<<3<<endl;
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