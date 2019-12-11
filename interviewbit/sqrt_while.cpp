#include<iostream>
using namespace std;

int main(){
	int sq;
	cin>>sq;
	int tst=1;

	while(tst<=sq){
		if((tst*tst)<sq){tst++;}
		if((tst*tst)>sq){cout<<tst-1;
			break;}
		if((tst*tst)==sq){cout<<tst;break;}
	}
}