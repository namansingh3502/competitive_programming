#include<iostream>
using namespace std;

int main(){
	int test;
	cin>>test;

	for(int t=0;t<test;t++){

	long long size,one,space,zero,total,extra,sum;
	long long rep,ext,left,ans,mid;

	cin>>size>>one;
	zero=size-one;
	space=one+1;
	total=size*(size+1)/2;

	if(one>0){
	if(size==1 || size==0){
		if(one==1){
			ans=1;
		}
		else{ans=0;
		}
	}
	else if(one==1){
			if(size%2==1){
				mid=(size+1)/2;
				ans=mid*mid;
			}
			else{
				ans=((size/2)*(1+(size/2)));
			}
		}
	else if(zero<=space){
		ans=total-zero;
	}
	else if(zero>space){
		rep=zero/space;
		ext=zero%space;
		left=one+1-ext;
		ans=(2*total-(left*rep*(rep+1))-(ext*(rep+1)*(rep+2)))/2;
	}}
	else ans=0;

	cout<<ans<<endl;
	
}
}