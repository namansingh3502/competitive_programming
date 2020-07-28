#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<iterator>

using namespace std;

int main(){

	int n, x,three = 0;
	vector< int > arr_up;
	vector< int > arr_dn;
	unordered_map< int, int > count;

	cin>>n;

	for( int i = 0; i < n; i++ ){
		cin>>x;
		if( count[x] ) arr_dn.push_back(x);
		
		else arr_up.push_back(x);
		
		count[x] += 1;
		
		if( count[x] == 3 ) three = 1;
	}

	if( three == 1 ) cout<<"NO"<<endl;
	else{
		sort( arr_up.begin(), arr_up.end() );
		sort( arr_dn.rbegin(), arr_dn.rend() );

		cout<<"YES"<<endl<<arr_up.size()<<endl;

		for( auto itr = arr_up.begin(); itr != arr_up.end(); itr++ ){
			cout<<*itr<<" ";
		}

		cout<<endl;
		cout<<arr_dn.size()<<endl;
		
		for( auto itr = arr_dn.begin(); itr != arr_dn.end(); itr++ ){
			cout<<*itr<<" ";
		}

	}

	return 0;
}