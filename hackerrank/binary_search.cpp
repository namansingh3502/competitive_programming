#include<iostream>
using namespace std;

int search_no(int data[],int start,int end,int req_no){
	int mid=((end-start)/2)+start;
	if(data[mid]>req_no){
	return search_no(data,start,mid-1,req_no);
	}
	if(data[mid]<req_no){
	return search_no(data,mid+1,end,req_no);
	}
	if(data[mid]==req_no){
		return mid;
	}
	return -1;
}

int main(){
	int data[]={2,4,7,9,13};
	int ans;
	int n=sizeof(data);
	int req_no=9;
	ans=search_no(data,0,n-1,req_no);
	if(ans==-1){cout<<"not in data";}
	else cout<<"index: "<<ans;
}

