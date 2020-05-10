#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;

    //for the sequence abc
    if(a>b&&b>c){
            cout<<a<<" is greatest among the three nmbers.\n"<<
            " Arrangement in descending order is:"<<  a<<">"<<b<<">"<<c;
    }

    //for the sequence acb
    else if(a>c&&c>b){
            cout<<a<<" is greatest among the three nmbers.\n"<<
            " Arrangement in descending order is:"<<  a<<">"<<c<<">"<<b;

    }

    //for the sequence bac
    else if(b>a&&a>c){
            cout<<b<<" is greatest among the three nmbers.\n"<<
            " Arrangement in descending order is:"<<  b<<">"<<a<<">"<<c;
    }

    //for the sequence bca
    else if(b>c&&c>a){
            cout<<b<<" is greatest among the three nmbers.\n"<<
            " Arrangement in descending order is:"<<  b<<">"<<c<<">"<<a;
    }

    //for the sequence cab
    else if(c>a&&a>b){
            cout<<c<<"is greatest among the three nmbers.\n"<<
            " Arrangement in descending order is:"<<  c<<">"<<a<<">"<<b;

    }

    //for the sequence cba
    else if(c>b&&b>a){
            cout<<c<<" is greatest among the three nmbers.\n"<<
            " Arrangement in descending order is:"<<  c<<">"<<b<<">"<<a;

    }

    //for the sequence (ab)c
    else if(a==b&&a>c){
        cout<<a<<" is greatest among the two nmbers(Two of the numbers are equal).\n"<<
        " Arrangement in descending order is:"<<  a<<"="<<b<<">"<<c;

    }

    //for the sequence c(ab)
    else if(a==b&&c>a){
        cout<<c<<" is greatest among the two nmbers(Two of the numbers are equal).\n"<<
        " Arrangement in descending order is:"<<  c<<">"<<a<<"="<<b;

    }

    //for the sequence a(bc)
    else if(b==c&&a>b){
        cout<<a<<" is greatest among the two nmbers(Two of the numbers are equal).\n"<<
        " Arrangement in descending order is:"<<  a<<">"<<b<<"="<<c;

    }

    //for the sequence (bc)a
    else if(b==c&&b>a){
        cout<<b<<" is greatest among the two nmbers(Two of the numbers are equal).\n"<<
        " Arrangement in descending order is:"<<  b<<"="<<c<<">"<<a;

    }

    //for the sequence (ac)b
    else if(a==c&&a>b){
        cout<<a<<" is greatest among the two nmbers(Two of the numbers sre equal).\n"<<
        " Arrangement in descending order is:"<<  a<<"="<<c<<">"<<b;

    }

    //for the sequence b(ac)
    else if(a==c&&b>a){
        cout<<b<<" is greatest among the two nmbers(Two of the numbers are equal).\n"<<
        " Arrangement in descending order is:"<<  b<<">"<<a<<"="<<c;

    }

    //for the sequence (abc)
    else{ cout<< "ALL THE THREE NUMBERS ARE EQUAL";
    }

    cout<<"\n\n";
return 0;
}
