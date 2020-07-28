cbr_84_c

#include<iostream>

using namespace std;

int main(){

	int n,a=0,i,ans=0;

	cin>>n;

	for( i = 0; i < 7; i++ )
		if( (n - 4 * i ) % 7 == 0 && n - 4 * i >= 0 )  break;

	n -= 4 * i;	

	if( i < 7 ){
		while( i-- )  cout<<4;
		
		while( n ){
			cout<<7;
			n -= 7;
		}

	}
	else cout<<-1<<endl;

	return 0;

}