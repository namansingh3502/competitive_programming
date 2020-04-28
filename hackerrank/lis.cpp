#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t; 
	while(t--){
	    int n; cin>>n; 
	    int arr[n];
	    int lis[n];
	    for(int i=0;i<n;i++) cin>>arr[i];
	    
	    for(int i=0;i<n;i++) lis[i] = 1; 
	    
	    for(int i=1;i<n;i++){
	        for(int j=0;j<i;j++){
	            if(arr[i]>=arr[j]){
	                lis[i] = max(lis[i],1+lis[j]);
	            }
	        }
	    }
	    
	    int ans = 0; 
	    
	    for(int i=0;i<n;i++) ans= max(ans,lis[i]);
	    
	    cout<<ans<<endl; 
	    
	}
	return 0;
}




/*#include<iostream>
using namespace std;
#define ll long long

int main(){
    int length;
    cin>>length;
    ll number[length];
    ll size[length];
    ll maxi=0;
    size[0]=1;	

    cin>>number[0];

    for(int i=1;i<length;i++){
        cin>>number[i];
        size[i]=1;
        for(int j=i-1;j>=0;j--){
            if(number[j]<number[i]){
                if(size[j]>=size[i]){
                    size[i]=size[j]+1;
            	}
            }
        }
    }
    int max=0;
    for(int i=0;i<length;i++){
        if(size[i]>max){
            max=size[i];
        }
    }
    cout<<max;
}*/