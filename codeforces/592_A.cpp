#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include<utility>
#include<string>
using namespace std;

#define ll long long



void solve(){
	int a,b,c,d,e,x,y;
	cin>>a>>b>>c>>d>>e;

	x = a/c;
	if(a%c)x++;

	y = b/d;
	if(b%d)y++;

	if( x+y <= e){
		cout<<x<<" "<<y<<endl;
	}
	else{
		cout<<-1<<endl;
	}


}

int main(){
	int test;
	cin>>test;
	while(test--){
		solve();
	}
	return 0;
}