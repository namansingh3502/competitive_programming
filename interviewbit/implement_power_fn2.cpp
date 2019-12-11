#include<iostream>
using namespace std;

long long int product (long long int x,long long int m,long long int n)
	if(m=0){ return 1;}
	if(m=1){ return x;}
	if((n%m)==0){
		return product(x,2m,n)*product(x,2m,n);}
	else{ return x*product(x,1,(n-m));}

int main(){
	int x,n,d;
	cin>>x>>n>>d;
	product(x,1,n);

}`