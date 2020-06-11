#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,x;
	cin>>n;
	vector<int> visited(n+1,0);
	for(int i = 1; i <= n; i++ ){
		cin>>x;
		if( x <= n )visited[x] = 1;
	}
	int ans = 0;
	for(int i = 1; i <= n; i++ ){
		if( visited[i] == 0 ){
			ans = i;break;
		} 
	}
	if( ans != 0 )cout<<ans<<endl;
	else cout<<n+1<<endl;

	return 0;
}
