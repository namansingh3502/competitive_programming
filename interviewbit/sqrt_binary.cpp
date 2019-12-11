#include<iostream>
using namespace std;
void sqrt(long first,long last,long sq){
	long mid=((first+last)/2);
	if((mid*mid)==sq){cout<<mid;}
	if((mid*mid)<sq){sqrt(mid+1,last,sq);}
	if((mid*mid)>sq){								//yaha kuch aur kar  sakte hain kya???
		if((mid-1)*(mid-1)<sq){cout<<(mid-1);}
		else {sqrt(first,mid-1,sq);}
	}
}

int main(){
	long x;
	cin>>x;
	sqrt(1,x,x);
	return 0;
}