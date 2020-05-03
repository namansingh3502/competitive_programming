#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
using namespace std;

#define ll long long

void solve(){
	int num;
	cin>>num;

	vector<int> pos(num+1,0);

	for(int i=1; i<=num; i++){
		cin>>pos[i];
	}
	int mxm = 1,minm = 1;
	
	for(int i=1;i<=num;i++){
		int j=i;
		int count=1;
		
		while((pos[j+1] - pos[j] <= 2) && j <= (num-1)){
			count++;
			j++;
		}
		
		j=i;
		while((pos[j] - pos[j-1] <= 2) && j > 1){
			count++;
			j--;
		}
		if (count > mxm) mxm = count;
		else if (count < minm) minm = count;
	}



	for(int i=1;i<num+1;i++){
		
	}
	

	cout<<minm<<" "<<mxm<<endl;

}

int main(){
	int test;
	cin>>test;
	while(test--){
		solve();
	}
	return 0;
}