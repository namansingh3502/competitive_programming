#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int a,b,c,d,p;

	cin>>a>>b>>c>>d>>p;

	if( c < a ){
		swap( a, c );
		swap( b, d );
	}

	int ans = a-1;

	if( ( p/b ) < ( c-a ) ){
		ans += ( p/b );
		if( p%b ) ans++;
	}

	else{

		if( a != c ){
			ans = c-1;
			p -= b * ( c - a );
		}

		int m = p / ( b+d );
		ans += m;

		if( p - m * ( b+d ) ) ans++;
	}
	cout<<ans<<endl;
	return 0;
}