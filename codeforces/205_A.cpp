#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	int arr_up[n],arr_dwn[n];
	int x=0,y=0;

	for( int i = 0 ; i < n; i++ ){
		cin>>arr_up[i]>>arr_dwn[i];
		x += arr_up[i];
		y += arr_dwn[i];
	}

	if( x % 2 == 0 && y % 2 == 0 ){
		cout<<0<<endl;
	}
	else{
		int count = 0;

		for( int i = 0; i < n; i++ ){
			if( arr_up[i] % 2 == 0 && arr_dwn[i] % 2 == 1 ){
				count++;x++;y++;
			}
			else if( arr_up[i] % 2 == 1 && arr_dwn[i] % 2 == 0 ){
				count++;x++;y++;
			}
			if( x % 2 == 0 && y % 2 == 0 )break;
		}
	
		if(  x % 2 == 0 && y % 2 == 0 ){
			cout<<count<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
	
	return 0;
}
