#include<iostream>
#include<vector>
#include<utility>
using namespace std;

#define ll long long

int search(const vector<pair<ll,ll> > &sum,int start,int end,int key){
	int ans=-1;

	while(start <= end){
		cout<<start<<" "<<end<<endl;
		int mid = start + (end - start + 1) / 2;

		if(sum[mid].first < key){
			cout<<"ba "<<mid<<endl;
			start = end + 1;
		}
		else if(sum[mid].first > key){
			cout<<"bb "<<mid<<endl;			
			end = mid - 1;
		}
		else if(sum[mid].first == key ){
			cout<<"bc "<<mid<<endl;
			ans = mid;
			end = mid - 1;
		}
	}
	return ans;
}


int main(){
	int length;
	cin>>length;

	vector<ll> value(length);
	vector<pair<ll,ll> > sum;

	ll add=0;

	for(int i=0;i<length;i++){
		cin>>value[i];
		add+=value[i];
		sum.push_back( make_pair(add,i));
	}

	sort(sum.begin(), sum.end());

	int count=0;

	for(int i=0;i<length;i++){

		int r=search(sum,i+1,length-1,sum[i].first);
		cout<<"c "<<r<<" "<<length-i<<endl;

		if(r==(-1)){
			count+=length-i-1;
		}
		else{
			count+=(r-i);
		}
	}
	cout<<count;
}