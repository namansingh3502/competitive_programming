#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

	int n,ans = 0;
	string str_1,str_2;
	char s;

	cin>>n;
	cin>>str_1>>str_2;

	for( int i = 0; i < n; i++ )

		if( str_1[ i ] != str_2[ i ] ){

			if( str_1[ i ] != str_1[ i + 1 ] && str_1[ i + 1 ] != str_2[ i + 1 ] )

				swap( str_1[i], str_1[ i + 1 ]);

			ans++;
		}

	cout<<ans<<endl;

	return 0;
}