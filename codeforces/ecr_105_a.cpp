#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
using namespace std;

void solve(){
    string a;
    cin>>a;

    int flag=0;

    vector< vector< char > > arr = { 
        {'(','(',')'}, {'(',')','('}, {')','(','('},
        {'(',')',')'}, {')','(',')'}, {')',')','('} };

    for( int j = 0; j < 6; j++ ){
        if( flag ) break;
        
        vector< char > stck(50);
        
        int top = -1;
        char sym;

        for( int i = 0; a[i]; i++ ){
            sym = arr[j][ a[i] - 'A' ];
            if( top >= 0 && ( stck[top] == '(' && sym == ')')) top--;
            else stck[++top] = sym;
        }
        if( top == -1 ) flag =1;
    }

    if( flag ) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

int main(){
    int test;
    cin>>test;

    while( test-- )
        solve();
}