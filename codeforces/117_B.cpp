#include<iostream>
#include<vector>

using namespace std;

int main(){

	int d,n,x,ans = 0;
	cin>>d>>n;
	for( int i = 1; i < n; i++ ){
		cin>>x;
		ans += d - x ;
	}
	
	cin>>x;

	cout<<ans<<endl;

	return 0;

}