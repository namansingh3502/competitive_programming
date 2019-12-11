#include<iostream>
using namespace std;

int product(int x,int n,int m,int p){
	if(n==0){
		return 1;}
	if((n/m)==2&&(n%m==0)){
		return p*p;}
	if((n/m)>1){
		p=p*p;
		return p*product(x,n,2*m,p);
	}
	if((n/m)<1){
		if(n%(m/2)==1){
			return p*x;}
		else {return p*product(x,(n-m),1,x);}
		}
	else return 0;
	}

int main(){
	int x,n,d;
	cin>>x>>n>>d;
	cout<<product(x,n,1,x)%d;
}