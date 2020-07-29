#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

#define ll long long

int main(){

	int n,x,a=0,j = 0,ans=0,sum=0;
	vector< int > num;
	unordered_map< int, int > count;

	cin>>n;

	for( int i = 0; i < n; i++ ){
		cin>>x;
		if( count[x] == 0 ) num.push_back(x);
		count[ x ]++;
	}

	sort( num.begin(), num.end() );

	for( int i = 0; num[i]; i++ ){
		sum = 0;  j = 0;

		while( num[ i + j ] - num[ i ] <= 5 && num[i + j]){
			sum += count[ num[i + j] ]; j++;
		}

		ans = max( ans, sum );
	}

	cout<<ans;

	return 0;
}