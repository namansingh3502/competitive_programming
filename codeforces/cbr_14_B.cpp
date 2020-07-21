#include<iostream>
using namespace std;

int main(){
	
	int n,x;
	cin>>n>>x;

	int a,b,left = 0,right = 10000;
	
	for( int i = 0; i < n; i++ ){
	
		cin>>a>>b;
		if( a>b) swap(a,b);
		left = max(a, left);
		right = min(b, right);
	}

	if( left > right ) cout<<-1<<endl;
	else if( left < x && right > x ) cout<<0<<endl;
	else if( left < x && right < x ) cout<< x-right<<endl;
	else if( left > x && right > x ) cout<< left-x <<endl;
	return 0;
}
		
