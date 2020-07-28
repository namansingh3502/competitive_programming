#include <iostream>

#define ll long long

int main(){

	ll n, p, a, i, x = 0;
	cin>>n;

	for (p = 1; p < (1<<10); p++){

		a = 0;
		for (i = 9; i >= 0; i--)
			a = a*10 + ((p>>i)&1);
		
		if (1 <= a && a <= n)
			x++;
	}
	cout<<x;
	return 0;
}
