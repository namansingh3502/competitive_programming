#include<iostream>

using namespace std;

int main(){

	int n,x,ans = 0,last;

	cin>>n;

	cin>>last;
	ans += last + n;

	for( int i = 1; i < n; i++ ){
		cin>>x;
		if( x < last )  ans += last - x + 1 ;
		
		else  ans += 1 + ( x - last );
		
		last = x;
		
	}
	
	cout<<ans<<endl;

	return 0;

}