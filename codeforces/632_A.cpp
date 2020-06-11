#include<iostream>
using namespace std;

int main(){
	int test;
	cin>>test;
	for(int t=0;t<test;t++){
		int row,col;
		cin>>row>>col;
		cout<<'w';
		for(int i=1;i<col;i++){
			cout<<'b';
		}
		for(int i=1;i<row;i++){
			cout<<endl;
			for(int j=0;j<col;j++){
				cout<<'b';
			}
		}
		cout<<endl;
	}
	return 0; 
}