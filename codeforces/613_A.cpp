#include<iostream>
using namespace std;

int main(){
	int l=0,r=0,n;
	cin>>n;
	char inp[n];
		
	for(int i=0; i<n;i++){
		cin>>inp[i];
		if(inp[i]=='L'){l++;
		}
		else if(inp[i]=='R'){r++;
		}
	}
	cout<<l+r+1<<endl;

	
}