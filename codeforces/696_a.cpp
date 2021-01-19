#include<iostream>
#include<vector>
#include<string>

using namespace std;

#define ll long long

//int main(){
void solve(){

	int n,prev;
	cin>>n;

	int a[n];
	string b;
	cin>>b;

	a[0]=1;

	if( b[0] == '1' )
		prev = 2;
	else	
		prev = 1;


	for( int i = 1; i < n; i++ ){
		if( prev == 2 && b[i] == '1' ){
			//cout<<" a "<<endl;
			a[i]=0;
			prev = 1;
		}
		else if( prev == 2 && b[i] == '0' ){
			//cout<<" b "<<endl;

			a[i] = 1;
			prev = 1;
		}

		else if( prev == 1 && b[i] == '1' ){
			//cout<<" c "<<endl;

			a[i] = 1;
			prev = 2;
		}
		else if( prev == 1 && b[i] == '0' ){
			//cout<<" d "<<endl;

			a[i] = 0;
			prev = 0;
		}
		else if( prev == 0 && b[i] == '1' ){
			//cout<<" e "<<endl;

			a[i] = 1;
			prev = 2;
		}
		else if( prev == 0 && b[i] == '0' ){
			//cout<<" f "<<endl;

			a[i] = 1;
			prev = 1;
		}

	}

	for( int i = 0; i < n; i++ ){

		cout<<a[i];
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