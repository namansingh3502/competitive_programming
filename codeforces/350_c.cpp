#include<iostream>
#include<vector>
#include<unordered_map>
#include<iterator>

using namespace std;

int main(){

	int n,m,x,sub=-1,mx=-1,ans;

	unordered_map< int, int > num;
	unordered_map< int, int >::iterator itr;

	cin>>n;

	for( int i = 0; i < n; i++ ){
		cin>>x;
		num[x]++;
	}

	cin>>m;

	vector< int > lang(m);

	for( int i = 0; i < m; i++ )  cin>>lang[i];

	for( int i = 0; i < m; i++ ){
		cin>>x;
		if( num[lang[i]] > mx ){
			mx = num[lang[i]];
			sub = num[x];
			ans = i;
		}
		else if( num[lang[i]] == mx )
			if( num[x] > sub ){
				sub = num[x];
				ans = i;
			}
	}

	cout<<ans+1;

	return 0;
}