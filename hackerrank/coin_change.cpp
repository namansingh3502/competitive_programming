#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector< int > values;
int ways=0;

int check(int target,int start){
	for(int it=start;it<values.size();it++){
		int n_target = target - values[it];

		if(n_target == 0){
			ways += 1;
			return 1;
		}
		if(n_target>0){
			int ans=check(n_target,it);
			
			return ans+1;
		}
	}
	return 1;
}

int main(){
	int target,coins;
	cin>>target>>coins;

	int x;
	for(int i=0;i<coins;i++){
		cin>>x;
		values.push_back(x);
	}

	check(target,0);

	cout<<ways;
}
