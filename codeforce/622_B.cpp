#include<iostream>
using namespace std;

int main(){
	int test;
	long long participant,first,second,sum,min,max;
	cin>>test;

	for(int i=0;i<test;i++){
		cin>>participant>>first>>second;

		sum=first+second;

		//min rank
		if(first==participant && second==participant){
		    min=participant;
		    max=participant;
		}
		else{
		    if(sum<=participant){
			min=1;
		    }
		    else{
			min=sum-participant+1;
		    }

		//max rank
		    if(sum<=(participant+1)){
		    	max=sum-1;
		    }
		    else{
			    max=participant;
		    }

		}

		cout<<min<<" "<<max<<endl;

	}
}
