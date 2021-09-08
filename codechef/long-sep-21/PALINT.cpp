#include<iostream>
#include<map>

#define ll long long

#define MAX 1e9 + 5

using namespace std;

void solution(){

	int n,x;
	cin>>n>>x;

	ll arr[n][2];
	map<int, int> count;

	for( int j = 0; j < n; j++ ){
		cin>>arr[j][0];
		arr[j][1] = arr[j][0] ^ x;

		count[arr[j][0]] += 1;
		count[arr[j][1]] += 1;
	}

	int mx=-1,steps=0,value;

	for( auto i:count ) {
		if( i.second > mx ){
			mx = i.second;
			value = i.first;
		}
	}


	for( int i = 0; i < n; i++ ) if( arr[i][1] == value ) steps++;
	
	cout<<mx<<" "<<steps<<endl;
}

int main(){

	int test;
	cin>>test;

	while(test--)
		solution();

	return 0;
}