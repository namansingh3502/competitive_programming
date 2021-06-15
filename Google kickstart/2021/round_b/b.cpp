#include<iostream>
#include<string>
#include<vector>

using namespace std;

void solve(){

    int n;
    cin>>n;

    vector<int> inp(n);

    for( int i = 0; i < n; i++ )
        cin>>inp[i];

    int a = 0, b = 0, diff = inp[a+1] - inp[a], ans = 2, count = 2;
    int diff_count = 0;

    for( int i = 2; i < n; i++ ){
        if( inp[i] == inp[a] + diff* count ){
            count++;
            //cout<<"a "<<count<<" "<<inp[i]<<endl;
        }
        else{
            diff_count++;
            if( diff_count == 1 ) { b = i; count++;
                //cout<<"b "<<count<<" "<<inp[i]<<endl;
            }
            else{
                a = b;
                b = i;
                ans = max( count, ans );
                //cout<<"c "<<count<<" "<<inp[i]<<" "<<ans<<endl;
                count = 2; diff_count = 0;
                diff = inp[a+1] - inp[a];
            }
        }
    }
    ans = max( count, ans );

    cout<<ans;

}


int main(){
    int test;
    cin>>test;

    for( int i = 1; i <= test; i++ ){
        cout<<"Case #"<<i<<": ";
        solve();
        cout<<endl;
    }
}
