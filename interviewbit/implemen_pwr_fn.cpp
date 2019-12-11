#include<iostream>
using namespace std;
long long int product(long long int x,long long int pw,long long int d){
	long long int w,v;
	if(x==0&&pw==0){return 0;}
	if(pw==0){return 1;}
	if(pw==1){return x%d;}
	w=product(x,pw/2,d);
	if(pw%2==0){
		return ((w%d)*(w%d))%d;
	}
	else{v=(product(x,(pw-1)/2,d)%d);
		return (((x%d)*v%d)%d*(v%d)%d);
	}
}
int main(){
	int x,n,d,ans;
	cin>>x>>n>>d;
	ans=product(x,n,d);
	if(ans>0){cout<<product(x,n,d);}
	else{cout<<(product(x,n,d)+d)%d;}
	return 0;
}
