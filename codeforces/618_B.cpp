#include <bits/stdc++.h> 
using namespace std;

int main(){
	int test;
	long size;
	cin>>test;
	for(int i=0;i<test;i++){
		cin>>size;
		long array[size*2];
		for(int j=0;j<size*2;j++){
			cin>>array[j];
		}
		sort(array, array+(size*2));
		cout<<array[size]-array[size-1]<<endl;
	}
}