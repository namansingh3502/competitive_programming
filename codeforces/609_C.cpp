#include<bits/stdc++.h>
using namespace std;

int MAX = 1e4 + 5;
#define ll long long

void solve(){
	
	int n,k,num;
	cin>>n>>k>>num;

	queue < int > q;
	vector< int > digit(n);

	int x;

	for( int i = n - 1; i >= 0; i-- ){
		x = num % 10;
		digit[i] = x;
		num = num / 10;
	}

	for(int i = 0; i < k; i++){
		q.push(digit[i]);
	}
	int ans=0;

	for(int i = 0; i < n; i++){
		
		x = q.front();
		if ( x != digit[i] ) {
										// increasing value of 9 will 
			ans = 1;
			break;
		}
		q.pop();
		q.push( x );

	}

	vector< int > out;
	queue< int > ansq;

	if(ans == 1){
		
		for( int i = 0; i < k; i++ ){
			ansq.push(digit[i]);
		}

		for( int i = 0; i < n; i++ ){
		
			x = ansq.front();
			out.push_back( x );
			ansq.pop();
			ansq.push( x );
		}
	}
	else{
		for( int i = 0; i < n; i++ ){
			out.push_back(digit[i]);
		}
	}
	for(int i = 0; i < n; i++){
		cout<<out[i];
	}

}



int main(){
	int test=1;
	//cin>>test;

	while(test--)
		solve();

	return 0;
}