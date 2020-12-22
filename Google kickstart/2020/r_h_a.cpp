#include<iostream>

using namespace std;

void solve(){
	
	int levels,current_level,target_level;
	cin>>levels>>current_level>>target_level;

	int diff = (current_level - target_level) * 2;
	int ans;

	if ( diff < current_level ){
		cout<< diff + levels <<endl;
	}
	else{
		cout<< current_level + levels <<endl;
	}

}

int main(){
	int test,i = 1;
	cin>>test;
	while( test-- ){
		cout<<"Case #"<<i<<": ";
		i++;
		solve();
	}

	return 0;	
}