#include<iostream>
#include <utility> 
using namespace std;

#define ll long long

int main(){
	int test;
	cin>>test;

	for(int t=0;t<test;t++){
		int length,ans=1;
		cin>>length;
		ll a[length];
		ll b[length];
		pair<char,int> pos;
		pair<char,int> neg;
		
		pos=make_pair('n',0);
		neg=make_pair('n',0);

		for(int i=0;i<length;i++){
			cin>>a[i];
		}
		for(int i=0;i<length;i++){
			cin>>b[i];
		}

		if(a[0]!=b[0]){
			ans=0;
		}
		else{
			for(int i=1;i<length;i++){
				if(a[i]!=b[i]){
					ll x;
					x=b[i]-a[i];
					if(x>0){
						if(pos.first!='y'){
							for(int m=pos.second;m<i;m++){
								if(a[m]==1){
									pos.first='y';
									break;
								}
								else if(m==i-1 && pos.first!='y'){ans=0;break;}
							}
							if(pos.first!='y'){
								pos.second=i-1;
							}
						}	
					}
					if(x<0){
						if(neg.first!='y'){
							for(int m=neg.second;m<i;m++){
								if(a[m]==-1){
									neg.first='y';
									break;
								}
								else if(m==i-1 && neg.first!='y'){ans=0;break;}
							}
							if(neg.first!='y'){
								neg.second=i-1;
							}
						}
					}
				}
			}
		}
		if(ans==0){cout<<"No"<<endl;}
		else{cout<<"Yes"<<endl;}

	}
}