// long july PTMSSNG

#include <iostream> 
#include <unordered_map> 
#include <iterator> 

using namespace std;

#define ll long long

void solve(){
	
	unordered_map < ll, int > row;
	unordered_map < ll, int > col;

	ll x,y,n;

	cin>>n;

	for(int i = 1; i < 4 * n; i++ ){
		cin>>x>>y;

		if( row[x] ) row.erase( x );
		else row[x] = 1;

		if( col[y] ) col.erase( y );
		else col[y] = 1;

	}

	ll ans_x,ans_y;

	auto itr = row.begin();
	ans_x = itr -> first;

	itr = col.begin();
	ans_y = itr -> first;

	cout<<ans_x<<" "<<ans_y<<endl;


}



int main(){
	int test;
	cin>>test;

	while(test--)
		solve();
	
	return 0;
}