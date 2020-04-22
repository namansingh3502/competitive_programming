#include<iostream>
using namespace std;

#define ll long long

int check(ll i,ll j,ll k){
	if( (i + j >= k && j + k >= i) && k + i >= j ){
		return 1;
	} 
	return -1;
}

void search(ll a,ll b,ll c,ll d){
	int ans=0;
	for(ll i = a ; i <= b ; i++){
		for(ll j = b ; j <= c ; j++){
			for(ll k = c ; k <= d ; k++){
				ans = check(i,j,k);
				if(ans=1){
					cout<<i<<" "<<j<<" "<<k<<" "<<endl;
					break;
				}
			}
		}
	}
}

int main(){
	int test;
	while(test--){
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		search(a,b,c,d);

		for(ll i = a ; i <= b ; i++){
			for(ll j = b ; j <= c ; j++){
				for(ll k = c ; k <= d ; k++){
					ans = check(i,j,k);
					if(ans=1)break;

				}
			}
		}
	}
}