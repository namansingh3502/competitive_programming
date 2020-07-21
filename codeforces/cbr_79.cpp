#include<iostream>
#include<string>

using namespace std;

int main(){

	string str;

	cin>>str;

	if( str.length() == 1 ) cout<<0<<endl;
	else{

		int sum = 0, count = 1;

		for( int i = 0; str[i]; i++ ){
			sum += str[i] - '0';
		}

		if( sum <= 9 ) cout<<count<<endl;
		else{
			int n;

			while( sum > 9 ){
				n = sum;
				sum = 0;

				while( n ){
					sum += n % 10;
					n /= 10;
				}
				count++;
			}

			cout<<count<<endl;
		}
	}

	return 0;
}