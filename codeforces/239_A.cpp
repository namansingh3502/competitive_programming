#include<bits/stdc++.h>
using namespace std;

int main(){
	int y,k,n;
	cin>>y>>k>>n;
	
	int start = (( y / k ) + 1) * k;
	int out = start - y;
	int mx = n - y;

	if( out <= mx ){
		for( int i = 0; out <= mx; i++ ){
			cout<<out<<" ";
			out += k;
		}
	}
	else{
		cout<<-1<<endl;
	}
	
}
