#include<iostream>
using namespace std;


int main() {
    int x,y;
    cin >>x;
    cin >>y;

    if (x>y) {
    cout <<"first numer is greater than second by "<<(x-y);
    }

    else if (y>x) {
    cout<<"second number is greater than first by "<<(y-x);}

    else { cout<<"both numbers are equal";}
    cout <<"\n\n";

return 0;

}
