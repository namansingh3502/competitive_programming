#include<bits/stdc++.h>
using namespace std;
	
int MAX = 1e5 + 10;
#define ll long long


int solve(){
	
	ll n,team,x,ans=0;

	cin>>n>>team;
	
	vector< ll > skill(n);

	for(int i = 0; i < n; i++){
		cin>>x;
		skill[i]=x;
	
	}

	sort( skill.begin() , skill.end() );

	ll sum = 0,minm=0;
	
	for( int i = 0; i < team; i++ )
		sum += skill[ i ];	

	
	minm = ( skill[ team - 1 ] * team ) - sum;
	ll current = 0;

	for( int i = team; i < n; i++ ){

		sum -= skill[ i - team ];
		
		sum += skill[ i ];


		current = ( skill[ i ] * team ) - sum;
		if ( current < minm ){
			minm = current;
		}

	}

		cout<<minm<<endl;

	return 2;
}

int main(){

	int test;
	cin>>test;
	int a=1;
	while(test--){
		cout<<"Case #"<<a<<": ";
		solve();
		a++;
	}
	return 0;
}