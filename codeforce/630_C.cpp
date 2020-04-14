#include<iostream>
#include<map>
#include<string>
#include <algorithm>
using namespace std;


int main(){
	int test;
	cin>>test;
	for(int i=0;i<test;i++){
		string word;
		int length,period,part,parts,change=0,check;
		cin>>length>>period;
		cin>>word;

		parts=length/period;
		//cout<<endl;
		for(int i=0;i<period/2;i++){
			map<char,int> count;
			for(int j=0;j<parts;j++){
					//cout<<(period*j)+i<<" ";
					count[word[(period*j)+i]]+=1;
					//cout<<(period*j)+period-i-1<<" ";
					count[word[(period*j)+period-1-i]]+=1;

			}

			int mx=0;
			for(auto it=count.begin();it!=count.end();it++){
				//cout<<"a "<<it->first<<" "<<it->second<<endl;
				mx=max(it->second, mx);
			}
			change+=((parts*2)-mx);
			//cout<<"c "<<change<<endl;
		}

		if(period%2==1){		
			map<char,int> count;
			for(int j=0;j<parts;j++){
				//cout<<(period*j)+(period/2)<<endl;
				count[word[(period*j)+(period/2)]]+=1;
			}

			int mx=0;
			for(auto it=count.begin();it!=count.end();it++){
				//cout<<"b "<<it->first<<" "<<it->second<<endl;
				mx=max(it->second, mx);
			}

			change+=(parts-mx);
			//cout<<"d "<<change<<endl;
		}

		cout<<change<<endl;
	}
}