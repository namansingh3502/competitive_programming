#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
long long max_diff(long long array[],long long j,long long size){
	long long max_diff=(-1),diff=(-1);
	
	for(int k=1;k<size;k++){
		if(array[k]==(-1) && array[k-1]==(-1)){
			diff=0;
		}
		else if(array[k-1]==(-1)){
			diff=abs(array[k]-j);
		}
		else if(array[k]==(-1)){
			diff=abs(array[k-1]-j);
		}
		else{diff=abs(array[k]-array[k-1]);
		}

		if(diff>max_diff){max_diff=diff;}
	}
	return max_diff;
}

long long index(long long array[],long long start,long long end,long long size){
	if(end>=1){
	long long mid=(start+end)/2;

	long long a=max_diff(array,mid-1,size);
	long long b=max_diff(array,mid,size);
	long long c=max_diff(array,mid+1,size);

	long long left=a-b;
	long long right=c-b;

		if(left>0 && right>0){
			cout<<b<<" "<<mid<<endl;
		}

		else if(left>0 && right<0){
			return index(array,mid+1,end,size);
		}

		else if(left<0 && right>0){;
			return index(array,start,mid-1,size);
		}
		else if(left==0 || right==0){
			cout<<b<<" "<<mid<<endl;
		}
	}
	return -1;
}

int main(){
	int test;
	cin>>test;
	for(int t=0;t<test;t++){
		int size,zero=0;
			cin>>size;
		long long array[size],ans;
		long long max=(-1);

		for(int i=0;i<size;i++){
		 	cin>>array[i];
		 	if(array[i]>max){max=array[i];}
		 	if(array[i]==0 || array[i]==(-1)){zero++;}
		 }

		if(zero==size){cout<<"0 0"<<endl;}
		else{
			ans=index(array,0,max,size);
		}

	}
	return 0;
}
