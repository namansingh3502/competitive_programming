#include<iostream>
#include<vector>
using namespace std;

int main(){
	int test;
	cin>>test;
	for(int t=0;t<test;t++){
		int length,rounds,x;
		cin>>length>>rounds;
		
		int extra=rounds,ans=length+rounds;
		vector<int> places(length+rounds+1,0);

		for(int j=1;j<=length;j++){
			cin>>x;
			places[x]=1;
		}

		for(int i=1;i<=length+extra;i++){
			if(places[i]==0){
				if(rounds!=0){
					rounds--;
				}
				else if(rounds==0){
					ans=i-1;
					break;
				}
			}
			//cout<<endl<<i<<" "<<rounds<<" "<<places[i]<<endl;
		}

		cout<<ans<<endl;
	}
	return 0;
}