#include<iostream>
#include<unordered_map>

using namespace std;

int main(){

	int a,b,m,n;
	string x,y,ans = "";
	unordered_map < string, string > words;

	cin>>a>>b;

	for( int i = 0; i < b; i++ ){
		cin>>x>>y;
		words[x] = y;
	}

	for( int i = 0; i < a; i++ ){
		cin>>x;

		m = x.length();
		n = words[x].length();

		if( n < m ) ans += words[x] + " ";
		else ans += x + " ";
	}

	cout<<ans<<endl;

	return 0;
	
}