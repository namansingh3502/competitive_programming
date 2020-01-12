#include<iostream>
using namespace std;

int find(int data[],int start,int end,int search){
    int mid=(start+end)/2;
    if(data[mid]=search){return mid;}
    else if(search>data[start]&&search<data[mid]){

    }



    else {return -1;}
}

int main(){
    int size,shift,a,search;                               
    cin>>size;
    a=6;
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
    cin>>search;

    cout<<find(main_array,0,size-1,search)<<endl;
 
    return 0;
   
}