#include<iostream>
#include<cstdlib>
using namespace std;

int aakhri_khojo(int data[],int start,int end){
	int mid;
	mid=(start+end)/2;
	if(data[mid]>data[mid+1]){
		return mid;
	}
	if(data[])
}   

int main(){
	int size,shift,a;								//working properly
	cin>>size;
	shift=rand()%20;
	a=shift%size;

	int in_array[size],main_array[size];

	for(int i=0;i<size;i++){
		cin>>in_array[i];
	}
	for(int i=0;i<size-a;i++){
		main_array[i]=in_array[(a)+i];
	}

	for(int i=0;i<a;i++){
		main_array[size-a+i]=in_array[i];
	}												//till here
	
	int search;										//isko khojo
	cin>>search;

	int location=aakhri_khojo(main_array,0,size);

}