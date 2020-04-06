#include<iostream>
#include<vector>
using namespace std;

int main(){
	int number,missing=0;
	cin>>number;
	vector<int> numbers(number+1,0);
	vector<int> bulbs(number);
	for(int i=0;i<number;i++){
		cin>>bulbs[i];
		numbers[bulbs[i]]=1;
	}
	
	for(int i=0;i<number;i++){
		cout<<bulbs[i]<<" "<<numbers[i+1]<<" "<<i+1<<endl;
	}

}