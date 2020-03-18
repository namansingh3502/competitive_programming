#include<iostream>
#include<vector>
using namespace std;

int main(){
	int test,size;
	cin>>test;
	for(int i=0;i<test;i++){
		cin>>size;
		vector < char > str(size);
		vector < int > num(size);
		int a=0,b=0,ans=0;
		for(int j=0;j<size;j++){
			cin>>str[j];
			num[j]=(str[j]-48);
		}

		for(int j=0;j<size;j++){
			if(num[j]%2==1){
				a=num[j];
				for(int k=j+1;k<size;k++){
					if(num[k]%2==1){
						b=num[k];
						ans=1;
						break;
				}}
		break;}}
		if(ans==0){cout<<"-1"<<endl;}
		else{cout<<a<<b<<endl;}
	}
}

/*
int main(){
	int t,s,j,a,n=0;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>s;
		int num[s],sum=0;
		char str[s];
		
		for(int j=0;j<s;j++){					//storing number in array in digit form
			cin>>str[j];
			num[j]=(str[j]-48);
			sum+=num[j];						//sum of digits
		}

		if(s-1>0){
		if(sum%2==0){							//digit sum is even
			if(num[s-1]%2==1){					//ebne number condition
				for(j=0;j<s;j++){
				cout<<num[j];
			}}
			else{
				for(j=(s-1);j>=0;j--){
					if(num[j]%2!=0){n=1;			//first odd number, sum will be even-even=even
				for(int a=0;a<=j;a++){
					cout<<num[a];}
				break;}
		}}}

		else if(sum%2==1){						//sum of digit is odd
			if(num[s-1]%2==1){					//last digit is odd
				for(int j=(s-2);j>=0;j--){		
					if(num[j]%2==1){n=1;			//first odd number from sec last
				
				for(int x=0;x<s;x++){
					if(x==j){continue;}			//skip one odd number and print the num
					cout<<num[x];}}
				break;
			}}
				
			else {								//last digit is even
				for(int j=(s-2);j>=0;j--){		
					if(num[j]%2==1){n=1;			//first odd number from sec last
				
				for(int x=0;x<j;j++){			//print till first odd digit from last
					cout<<num[x];}}
				break;
			}}
			}
			if(n==0){cout<<"-1";}
		}

		else{cout<<"-1";}

		cout<<endl;
	}
}


4
4
1227
1
0
6
177013
24
222373204424185217171912
*/