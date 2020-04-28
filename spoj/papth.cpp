#include<iostream>
#include<vector>
#include<utility>
#include<queue> 
#include<cmath>
#include<string>
#include<map>

using namespace std;

vector<int> primes{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 
					47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

int check(int value){
	int eq1=value-1, eq2=value+1;

	for(auto i=primes.begin();i!=primes.end();i++){
		
		if(value%(*i)==0){
		//cout<<"\t\tc "<<" "<<*i<<endl;	
			return (-1);
		}
	}

	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int start,end,r,count=0,total=5000,new_num=0,ans=0;
		cin>>start>>end;
		queue<int> num;
		map<int, int> visited;

		num.push(start);
		visited.insert({start,1});
		num.push(-1);

		if(start!=end){
			while(total--){
					
				int number = num.front();
				int first = num.front();
				num.pop();
				
				if(first==end){
					cout<<count<<endl;
					break;
				}

					
	
				if(first == (-1)){
					count++;
					num.push(-1);	
					continue;
				}

				int arr[4];

				for(int i = 0 ; i < 4 ; i++){
					arr[i]= number % 10;
					number/=10;
				}

				for(int i = 0 ; i < 4 ; i++){
			
					for(int j=0;j<=9;j++){
						new_num = first - arr[i] * pow(10,i) + j * pow(10,i);
						
						if(new_num!=first){
							int r=check(new_num);
							if(r==1){
								if(visited.find(new_num)==visited.end()){
									num.push(new_num);
									visited.insert({new_num,1});
								}
							}
						}
						
					}
				}
			
				
			}

			if(ans!=1){cout<<"Impossible"<<endl;}
		}

		
		else{cout<<0<<endl;}

	}
}
