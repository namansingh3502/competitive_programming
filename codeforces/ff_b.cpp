#include<iostream>
using namespace std;

int main(){

	string str;
	int n,x,ans=0,mx=0;
	int arr[26];

	cin>>str;
	cin>>n;

	for( int i = 0; i < 26; i++ ){
		cin>>arr[i];
		mx = max( mx, arr[i] );
	}

	int i = 0;

	for( i = 0; str[i]; i++ ){
		x = str[i] - 'a';
		ans += (i + 1) * arr[ x ];
	}
	
	i++;

	for( int j = 0; j < n; j++){
		ans += i * mx;
		i++;
	}

	cout<<ans<<endl;

	return 0;

}