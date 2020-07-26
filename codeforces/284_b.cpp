#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main(){

	int a,b,m,n;
	string x,y,ans = "";
	unordered_map< string, string > f;
	unordered_map< string, string > s;

	cin>>a>>b;

	for( int i = 0; i < b; i++ ){
		cin>>x>>y;
		f[x] = y;
		s[y] = x;
	}

	for( int i = 0; i < a; i++ ){
		cin>>x;

		if( f[x] != NULL ){
			m = x.length();
			n = f[x].length();

			if( n < m ) ans += f[x] + " ";
			else ans += x + " ";
		}
		else{
			n = x.length();
			m = s[x].length();

			if( n < m ) ans += x + " ";
			else ans += s[x] + " ";

		}
	}

	cout<<ans<<endl;

}

