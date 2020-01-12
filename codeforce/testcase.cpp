#include<iostream>
using namespace std;

int main(){
	char inp[11];
	int l=0,r=0;
	
	for(int i=0; i<11;i++){
		cin>>inp[i];
		if(inp[i]=='L'){l++;
		}
		else if(inp[i]=='R'){r++;
		}
	}
	cout<<l+r+1<<endl;

	
}