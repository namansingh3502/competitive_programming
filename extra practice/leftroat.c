#include<stdio.h>

int main(){
	int i,r;
	int n,temp;

	scanf("%d %d",&n,&r);			//number of integers and rotation
	int arr[n];						//array declaration
	int l_rt[r];					//rotation arr

	for(i=0;i<n;i++){				//numbers
		scanf("%d",&arr[i]);}

	for(i=0;i<r;i++){				//to rotation array
		l_rt[i]=arr[i];}
	
	for(i=r;i<n;i++){printf("%d ",arr[i]);}
	for(i=0;i<r;i++){printf("%d ",l_rt[i]);}

		return 0;
}