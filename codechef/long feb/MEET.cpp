#include<iostream>
#include<string>

using namespace std;

int check(string a, string b ){
    
    a.pop_back();
    b.pop_back();

    if( a.back() != b.back() )
        return a.back() < b.back(); 

    if( a[0] == '1' && a[1] == '2' ) a[0]=a[1]='0';
    if( b[0] == '1' && b[1] == '2' ) b[0]=b[1]='0';

    return a<=b;
}

void solve(){
    string str_a,str_aa,str_b,str_bb,str_c,str_cc;
    
    cin>>str_a>>str_aa;
    string time_a = str_a+str_aa;
    string time_b ="",time_c="";

    int n; cin>>n;

    for( int i = 0; i < n; i++ ){
        cin>>str_b>>str_bb>>str_c>>str_cc;
        
        time_b = str_b + str_bb;
        time_c = str_c + str_cc;

        if( check( time_b, time_a ) && check( time_a, time_c ) ) cout<<'1';
        else cout<<'0';
    }
    cout<<endl;
}

int main(){
    int test;
    cin>>test;

    while( test-- )
        solve();
}