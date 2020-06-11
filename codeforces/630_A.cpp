#include<iostream>
using namespace std;

#define ll long long

int check_v(ll d[]){

		if(d[3]==d[4]){return 1;}
	
		else if(d[4]>d[3]){
			if((d[10]-d[6])>=(d[4]-d[3])){
				//cout<<"h"<<endl;
				return 1;
			}
			else{//cout<<"i"<<endl;
			return (-1);}
		}
	
		else if(d[3]>d[4]){
			if((d[6]-d[8])>=(d[3]-d[4])){
				//cout<<"j"<<endl;
				return 1;
			}
			else{//cout<<"k"<<endl;
				return (-1);}
		}
	return 0;
}

int check_h(ll d[]){
		if(d[1]==d[2]){//cout<<"c"<<endl;
		return check_v(d);}
	
		else if(d[2]>d[1]){
			if((d[9]-d[5])>=(d[2]-d[1])){
				//cout<<"d"<<endl;
				return	check_v(d);
			}
			else{//cout<<"e"<<endl;
			return (-1);}
		}
	
		else if(d[1]>d[2]){
			if((d[5]-d[7])>=(d[1]-d[2])){
				//cout<<"f"<<endl;
				return	check_v(d);
			}
			else{
				//cout<<"g"<<endl;
				return (-1);}
		}
	return 0;
}

int main(){
	int test;
	cin>>test;
	for(int i=0;i<test;i++){
		ll data[11];
		int ans;

		for(int i=1;i<11;i++){
			cin>>data[i];
		}

		if((data[10] == data[8]) && (data[3] + data[4] != 0 )){
			ans=(-1);
			// cout<<"a"<<endl;
		}
		else if((data[9] == data[7]) && (data[2] + data[1] != 0 )){
			ans=(-1);
			//cout<<"b"<<endl;
		}
		else {//cout<<"c"<<endl;
			ans=check_h(data);}

		if(ans==1){
			cout<<"Yes"<<endl;
		}
		if(ans==(-1)){
			cout<<"No"<<endl;
		}
	}
}