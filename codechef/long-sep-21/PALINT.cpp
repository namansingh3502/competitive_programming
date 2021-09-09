#include<iostream>
#include<map>

#define ll long long

#define MAX 1e9 + 5

using namespace std;

void solution(){

	ll n,x,y,ans;
	cin>>n>>x;

	ll arr[n];
	map<ll, ll> count,xored;

	for( ll i = 0; i < n; i++ ){
		cin>>arr[i];
		y = arr[i] ^ x;

		count[ arr[i] ] += 1;
		if( y != arr[i] ){
			count[ y ] += 1;
			xored[ y ] += 1;
		}
	}

	ll mx=-1,value;

	for( auto i : count ){

		y = i.first;
		if( count[y] > mx ){
			mx = count[y];
			value = i.first;
		}
		else if( count[y] == mx && xored[y] < xored[value]) value = i.first;
	}

	cout << count[value] << " " << xored[value] << endl;
}

int main(){

	int test;
	cin>>test;

	while(test--)
		solution();

	return 0;
}