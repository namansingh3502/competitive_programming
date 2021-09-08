#include<iostream>
using namespace std;



void solution(){
	int n, odd=0, even=0;
	cin>>n;
	int arr_a[n],arr_b[n];

	for( int i = 0; i < n; i++ ){
		cin>>arr_a[i];
		if(arr_a[i]%2) odd++;
	}

	int ans=0;
	even = n-odd;

	// place odd values at even places
	if( n/2 < odd ) ans = n/2;  		//if odd values are greater than available places
	else ans = odd;						//if odd vlues is less than avalable places
	
	// place even values at odd places
	if( even > (n/2 + n%2) ) ans += n/2 + n%2;		// if even values are greater than available
	else ans += even;								// if even values are less than available spaces


	cout<<ans<<endl;
}

int main(){
	int test;
	cin>>test;

	while( test-- )
		solution();

	return 0;
}