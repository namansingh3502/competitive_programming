#include<iostream>
#include<vector>
using namespace std;
 

int main(){
	long long test;
	cin>>test;
	for(long long i=0;i<test;i++)
	{
		long long total,self,floor;
		long long closed;
		
		cin>>total>>self>>closed;

		vector<long long> status(total+1,0);

		for(long long i=0;i<closed;i++){
			cin>>floor;
			status[floor]=1;
		}
	
			for(long long i=0;i<total;i++){
				if((self+i)<=total&&status[self+i]!=1){
						cout<<i<<endl;
						break;
				}
	
				if((self-i)>0&&status[self-i]!=1){
						cout<<i<<endl;
						break;
					}

			}

	}

	return 0;
}
