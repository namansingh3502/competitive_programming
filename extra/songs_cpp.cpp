#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector<int> number;
vector<int> values;
vector<int> songs;

int check(vector<int>& element,int target){

    for(auto it=element.begin(); it != element.end(); it++) {
        int ans=0;
        
        if(values[target] != -1){
            int i = *it;
            int n_target=target - i;
            
            int ans;
            if(n_target == 0) {
                songs.push_back(i);
                return 1;
            }
            
            else if(n_target > 0) ans=check(element,n_target);

            if (ans==1){
                songs.push_back(i);
                return 1;
            }
        }
    }
    values[target] = 6; 
    return -1;
}


int main(){
    int test;
    cin>>test;
    while(test--){
        
        int length,target;
        cin>>length>>target;

        vector<int> element;

        int x;
        values.clear();
        values.resize(2010);
        number.clear();
        number.resize(2010);

        for(int i = 0; i < length; i++){

            cin>>x;
            if(number[x]==0){
                element.push_back(x);
                number[x]=1;
            }

        }

        sort(element.begin(),element.end());

        while(target>0){
            int ans=check(element,target);
            if(ans == 1){
        
                cout<<target<<endl;

                for(auto it=songs.begin();it!=songs.end();it++){
                    cout<<*it<<endl;
                }
                break;
        	}

            target--;
        }
        if(target==0)cout<<target<<endl;
    
    }
    return 0;
}