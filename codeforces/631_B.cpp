#include<iostream>
#include<vector>
using namespace std;

#define ll long long

int main(){
	int test;
	cin>>test;
	for(int t=0;t<test;t++){

		ll length,x,count_same=0,sum1=0,sum2=0,sum_a_a=0,sum_a_b=0,sum_b_a=0,sum_b_b=0,ans=0;
		cin>>length;
		vector<ll>  arr_main(length+1,0);
		vector<ll>  visited(length+1,0);

		for(ll i=1;i<=length;i++){
			cin>>x;
			arr_main[i]=x;
			visited[x]+=1;
		}

		for(ll i=1;i<=length;i++){
			if(visited[i]==2){
				count_same++;
				//cout<<"a "<<i<<" "<<count_same<<endl;
			}
			if(visited[i]>2){
				ans=-1;
				break;
			}
		}
		if(ans==-1){
			cout<<0<<endl;
			continue;
		}

		sum1=((count_same+1)*count_same)/2;
		sum2=((length - count_same + 1)*(length - count_same))/2;

		for(ll i=1;i<=length;i++){
			if(i<=count_same){sum_a_a+=arr_main[i];}
			else{sum_a_b+=arr_main[i];}
			//cout<<"b "<<sum_a<<" "<<arr_main[i]<<endl;
		}

		for(ll i=1;i<=length;i++){
			if(i<=count_same){sum_b_a+=arr_main[length+1-i];}
			else{sum_b_b+=arr_main[length+1-i];}
			//cout<<"c "<<sum_b<<" "<<arr_main[length+1-i]<<endl;
		}
		
		if(sum1==sum2 && ((sum_a_a==sum1 && sum_a_b==sum2) && (sum_b_a==sum1 && sum_b_b==sum2))){
			cout<<1<<endl<<count_same<<" "<<length - count_same<<endl;
		}
		else if((sum1!=sum2) && ((sum_a_a==sum1 && sum_a_b==sum2) && (sum_b_a==sum1 && sum_b_b==sum2))){
			cout<<2<<endl<<count_same<<" "<<length - count_same<<endl;
			cout<<length - count_same<<" "<<count_same<<endl;
		}

		else if((sum1!=sum2) && (sum_a_a==sum1 && sum_a_b==sum2)){
			cout<<1<<endl<<count_same<<" "<<length - count_same<<endl;
		}

		else if((sum1!=sum2) && (sum_b_a==sum1 && sum_b_b==sum2)){
			cout<<1<<endl<<length - count_same<<" "<<count_same<<endl;
		}


		else{
			cout<<0<<endl;
		}
	}
	return 0;
}