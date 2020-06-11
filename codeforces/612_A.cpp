#include<iostream>
#include<string>
using namespace std;

int main(){
	int a,b=0,t,k;
	cin>>t;
	string str;
	for(int i=0;i<t;i++){
		b=0;
		cin>>k;
		cin>>str;
		for(int i=0;i<k;){
			
			if (str[i]=='A'&&str[i+1]=='P'){	
				a=0;

				while(str[i+1]=='P'&&i<(k-1)){  
					a++;
					i++;
				}

				if(a>b){b=a;}
			}
			else{i++;}

		}
		cout<<b<<endl;
	}

	return 0;
}