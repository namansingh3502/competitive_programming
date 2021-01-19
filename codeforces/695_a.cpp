#include<iostream>
#include<vector>

using namespace std;


void solve(){
	int n;
	cin>>n;

	int arr[] = { 0,9,8,9 };

	int i = 1;

	for( ; i < 4 && i <= n; i++ ) cout<<arr[i];
	int j = 0;
	for( ; i <= n; i++ ){
		cout<<j%10;
		j++;
	}
	

	cout<<endl;

}

int main(){

	int test;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}