#include<iostream>
using namespace std;

int  main(){
	double sum=0;
	int total;
	cin>>total;
	for(int i=1;i<=total;i++){
		sum+=(1.00/i);
	}
	cout<<sum<<endl;
}