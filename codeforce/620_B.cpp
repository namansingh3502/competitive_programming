#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<utility>
#include<math.h>
using namespace std;

int main(){
	int number,length,check,new_self,self,pri,sec,diff_pal=0;
	int total;
	string middle,n_string,out;
	cin>>number>>length;

	vector< string > str(number);
	vector< pair < string, int > > ans(number);
 

	for(int i=0;i!=number;i++){
	cin>>str[i];
	}

	//check for self_palindrome

	for(int i=0;i!=number;i++){
		new_self=0;
		n_string=str[i];
		reverse(n_string.begin(), n_string.end());

		if(str[i]==n_string){
			new_self++;

			for(int j=i+1;j<number;j++){
				if(str[j]==str[i]){
					new_self++;
				}
			}
		}

	//palindrome with max repeatation is selected as middle

		if(new_self>self){
			self=new_self;
			middle=str[i];
		}
	}

	//check for side palindrome 

	for(int i=0;i!=str.size()-1;i++){
		pri=1;sec=0;
		if(str[i]!=middle && str[i].size()!=0){

			for(int j=i+1;j!=str.size();j++){
				n_string=str[i];
				reverse(n_string.begin(), n_string.end());

				if(str[j]==str[i]){
					pri++;str[j].clear();
				}
				else if(str[j]==n_string){
					sec++;str[j].clear();
				}
			}
		}
		ans[i].first=str[i];
			if(sec!=0){
				ans[i].second=min(pri,sec);
				diff_pal++;}
			else{ans[i].second=0;}
	}

	total=(diff_pal*2+self)*length;
	cout<<total<<endl;

		if(total!=0){
			for(int a=0;a!=number;a++){
				for(int i=0;i<ans[a].second;i++){
					out=ans[a].first;
					cout<<out;
				}
			}
			for(int a=0;a!=self;a++){
				cout<<middle;
			}
			for(int a=0;a!=number;a++){
				reverse(ans[a].first.begin(), ans[a].first.end());
				for(int i=0;i<ans[a].second;i++){
					out=ans[a].first;
					cout<<out;
				}
			}
		}
		else{cout<<"0";}
}