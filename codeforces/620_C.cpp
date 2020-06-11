#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define ll long long

int main(){
	int test;
	cin>>test;
	for(int t=0;t<test;t++){
		ll customer=0,time,temp1,temp2,satisfied=0;
		ll l_temp,h_temp,low,high,temp,time_gap,total_time=0;
		
		cin>>customer>>temp;
		low=temp;
		high=temp;
		
		for(int i=0;i<customer;i++){
			cin>>time>>l_temp>>h_temp;

			time_gap=time-total_time; 
			total_time=time;

			if(l_temp>=low){
				if(l_temp<=low+time_gap || l_temp<=high+time_gap){
					satisfied++;
					low=l_temp;
					high=min(h_temp,temp+time_gap);
				}
			}

			else if(h_temp<=high){
				if(h_temp>=high-time_gap || h_temp>=low-time_gap){
					satisfied++;
					low=max(l_temp,temp-time_gap);
					high=h_temp;
				}
			}

			else if(low>l_temp && high<h_temp){
				satisfied++;
				low=max(l_temp,temp-time_gap);
				high=min(h_temp,time+total_time);
			}

		}

		if(satisfied==customer){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}

		
	}
}
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define ll long long

int main(){
	int test;
	cin>>test;
	for(int t=0;t<test;t++){
		ll customer=0,time,ans=1;
		ll l_temp,h_temp,low,high,temp,time_gap,total_time=0;
		
		cin>>customer>>temp;
		low=temp;
		high=temp;
		
		for(int i=0;i<customer;i++){
			cin>>time>>l_temp>>h_temp;

			time_gap=time-total_time; 

			low-=time_gap;
			high+=time_gap;

			low=max(low,l_temp);
			high=min(high,h_temp);

			if(low>high){ans=0;}					check high>low ?????

			total_time=time;

		}

		if(ans==1){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
}}
*/
 