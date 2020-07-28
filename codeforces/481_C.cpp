#include<iostream>
#include<vector>

#define ll long long

using namespace std;
vector< ll > rooms;
vector< ll > in;

int search(ll start, ll end, ll key ){
	ll mid = ( start + end ) / 2;

	if( rooms[mid - 1] < key && rooms[mid] >= key ) return mid;

	else if( rooms[mid] > key ) return search( start, mid - 1, key );

	else if( rooms[mid] < key ) return search( mid + 1, end, key );

	else return -1;
}

int main(){

	ll m,n,x,a;

	cin>>m>>n;

	rooms.push_back(0);

	for( ll i = 1; i <= m; i++ ){
		cin>>x; 
		rooms.push_back(x);
		rooms[ i ] += rooms[ i - 1 ];
	}

	for( ll i = 0; i < n; i++ ){
		cin>>x;
		in.push_back(x);
	}

	for( ll i = 0; i < n; i++ ){
		a = search( 0, m, in[i] );
		cout<<a<<" "<< in[i] - rooms[ a - 1 ]<<endl;
	}

	return 0;
}