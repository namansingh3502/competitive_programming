#include<iostream>
#include<cstdlib>
using namespace std;
 
int last(int data[],int start,int end){
    int mid=(start+end)/2;
    if(data[end]>data[start]){return end;}
 
    else if(data[end-1]>data[end]){return (end-1);}
    else if(data[start]>data[start+1]){return (start+1);}
 
   
    else if(data[mid]>data[mid+1]){return mid;}
    else if(data[mid-1]>data[mid]){return (mid-1);}
   
    else if(data[mid]>data[end]&&data[mid]>data[start]){return last(data,mid+1,end);}
    else if(data[mid]<data[start]&&data[mid]<data[end]){return last(data,start,mid-1);}
    else {return -1;}
 
}
int find(int data[],int start,int end,int search){
    int mid=(start+end)/2;
    if(data[mid]==search){return mid;}
    if(data[mid]>search){return find(data,start,mid-1,search);}
    if(data[mid]<search) {return find(data,mid+1,end,search);}
    else return -1;
}
 
int main(){
    int size,shift,a,search;                               
    cin>>size;
    shift=rand();
    a=shift%size;
    cout<<a<<endl;
    int in_array[size],main_array[size];
 
    for(int i=0;i<size;i++){
        cin>>in_array[i];
    }
    for(int i=0;i<size-a;i++){
        main_array[i]=in_array[(a)+i];
    }
 
    for(int i=0;i<a;i++){
        main_array[size-a+i]=in_array[i];
    }                                              
 
    int location=last(main_array,0,size-1);
    cin>>search;
 
    if(main_array[location]==search){
        cout<<location;}
    else if(main_array[0]<=search){
        cout<<find(main_array,0,location,search);}
    else if(main_array[size-1]>=search){
        cout<<find(main_array,location,size-1,search);}
 
    return 0;
   
}