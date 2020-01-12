#include<iostream>
using namespace std;
void available(){
	int a,b,c,r;
	cin>>a>>b>>c>>r;
	int l=b-a,ls=(c-r),rs=(c+r);

	if(l<0){l=(-1)*l;}
	if(a>b){int temp;
		temp=a;
		a=b;
		b=temp;}

	if(a>=ls&&b<=rs){cout<<"0"<<endl;}
	else if(rs<a||ls>b){cout<<l<<endl;}
	else if(a<ls&&rs<b){cout<<l-2*r<<endl;}
	else if(a>=ls&&b>=rs){cout<<l-((c-a)+r)<<endl;}
	else if(a<=ls&&b<=rs){cout<<l-(r+(b-c))<<endl;}

} 


int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){		
	available();
	}
	return 0;
}

/*
7
0
4
0
30
5
4
0
3

9
1 10 7 1
3 3 3 0
8 2 10 4
8 2 10 100
-10 20 -17 2
-3 2 2 0
-3 1 2 0
2 3 2 3
-1 3 -2 2*/
