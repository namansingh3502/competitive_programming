// long july CRDGAME

#include<iostream>
#include<string>
using namespace std;

#define ll long long

void solve(){

	string str_1,str_2;
	int n;
	ll  count_1, count_2, chef = 0, morty = 0; 
	cin>>n;

	for(int i = 0; i < n; i++ ){

		count_1 = 0; count_2 = 0;
		cin>> str_1 >> str_2;

		for(int i = 0; i < str_1.length(); i++ )
			count_1 += str_1[i] - '0';
		
		for(int i = 0; i < str_2.length(); i++ )
			count_2 += str_2[i] - '0';

		if( count_1 >= count_2 ) chef++;
		if( count_2 >= count_1 ) morty++;

	}

	if( chef > morty )
		cout << "0 " << chef << endl;
	
	else if( chef == morty )
		cout << "2 " << chef << endl;
	
	else 
		cout << "1 " << morty << endl;

}

int main(){
	int test;
	cin>>test;

	while(test--)
		solve();
	
	return 0;
}
