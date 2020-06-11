#include<iostream>
using namespace std;

#define ll long long




void search(ll a,ll b,ll c,ll d){
	int ans=0;
	if ((a == b && b == c) && c==a ){
		cout<<a<<" "<<b<<" "<<c<<" "<<endl;
	}
	else if ((b == c && c == d) && d==b ){
		cout<<b<<" "<<c<<" "<<d<<" "<<endl;
	}
	else if (a == b){
			cout<<a<<" "<<b<<" "<<c<<endl;
	}
	else if (b == c){
			cout<<b<<" "<<c<<" "<<d<<endl;
	}
	else{
		cout<<d-c+1<<" "<<c<<" "<<d<<endl;
	}
}


int main(){
	int test;
	cin>>test;
	while(test--){
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		search(a,b,c,d);
	}
}