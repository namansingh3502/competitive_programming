#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include<utility>
#include<string>
#include<map>
using namespace std;

#define ll long long

int solve(){
	int n,k;	
	cin>>n>>k;

	vector< int > orig(n);					// orignal array
	map< int,int > indx;					// element with current index
	vector< int > srt(n);					// sorted array
	vector< vector < int > > ans;			// output
	vector< int > pairs;					// pairs of swaped element
	vector< int > visited(n,0);				// to stop swaped number entry twice
	
	for( int i=0; i<n; i++ ){
		cin>>orig[i];
		indx.insert({orig[i],i});
	}

	srt=orig;
	sort(srt.begin(),srt.end());

	int count = 0;

	for( int i = 0; i< n; i++ ){
		if(srt[i] != orig[i]){
			
			int a,b,c;
											// i'th element of input array   v1
			a = indx.at(srt[i]);			// current position of the i'th element  v3
			b = indx.at(srt[a]);			// current position of the a'th element  v2

			if( a == b || b == i || i == a){
				continue;
			}

			c = orig[i];					// v1 to temp 
			orig[i] = orig[a];				// v3 to v1
			orig[a] = orig[b];				// v2 to v3
			orig[b] = c;					// temp/v1 to v2
			indx[orig[i]] = i;				// new index of v3
			indx[orig[b]] = b;				// new index of v2
 			indx[orig[a]] = a;				// new index of v1

 			ans.push_back({i+1, b+1, a+1});

 			count++;
		}	
	}

	int pair=0;

	for( int i=0; i<n; i++ ){
		
		int a;
		a = indx.at(srt[i]);

		if(srt[i] != orig[i]){
			if(orig[i] != 1){

				pair++;
				pairs.push_back(i);			// swaped element_1
				pairs.push_back(a);			// swaped element_2

				orig[i] = 1;				// mark added
				orig[a] = 1;				// mark added
			
			}
		}
	} 

	if(pair  % 2 != 0){
		cout<<-1<<endl;
		return 0;
	}

	for(int i = 0; i < pairs.size(); i+=4){
		
		ans.push_back({ pairs[i] + 1, pairs[i+2] + 1, pairs[i+1] + 1 });
		ans.push_back({ pairs[i+1] + 1, pairs[i+3] + 1, pairs[i+2] + 1 });

		count += 2;
	
	}

	if(count <= k){
		cout<<count<<endl;
		
		for(int i = 0; i < ans.size(); i++){
			cout<<ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2]<<endl;
		}
	}

	else {
		cout<<-1<<endl;
	}


	return 0;
}

int main(){
	int test;
	cin>>test;
	while(test--){
		solve();
	}
	return 0;
}