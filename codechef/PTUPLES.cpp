#include<iostream>
#include<vector>

using namespace std;

#define ll long long

int isPrime(int n) { 
    if (n <= 1) 
        return 0; 
    if (n <= 3) 
        return 1; 
  
    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 || n % 3 == 0) 
        return 0; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return 0; 
  
    return 1; 
}

void solve(){

	int n;

	cin>>n;

	if( n < 5 ) cout<<0<<endl;
	else if( n >= 5 ){
		int count = 1;

		for( int i = 5; i+2 <= n; i += 6 ){
			if( isPrime(i) && isPrime(i+2) )
				count++;
		}
		cout<<count<<endl;
	}

}

int main(){

	int test;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}