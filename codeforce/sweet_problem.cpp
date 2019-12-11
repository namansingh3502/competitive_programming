#include<iostream>
using namespace std;
int sort(int,int,int,int);

int days(int a,int b, int c,int count){		//r>g>b for all values
	if((a==0&&b==0)||(a==0&&c==0)||(b==0&&c==0)){return count;}
	else if(a>(b+c)){return (count+b+c);}
	else if(c==0){return count+b;}	
	else {return sort((a-c),b,0,(count+c));}
}
int sort(int a,int b,int c,int count){
	if(a>b&&b>c){return days(a,b,c,count);}
	else{int arr[3],temp; 
			arr[0]=a;arr[1]=b;arr[2]=c;
			for(int i=0;i<3;i++){		
			for(int j=i+1;j<3;j++){
				if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;}}}
		return days(arr[2],arr[1],arr[0],count);}
}

int main(){
	int no_querry,i=0,r,g,b;
	cin>>no_querry;

	while(i<no_querry){
		cin>>r>>g>>b;								
	cout<<sort(r,g,b,0)<<endl;
	i++;
	}
	return 0;
}