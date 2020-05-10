#include<iostream>
using namespace std;

int main() {

    int x=10;
    int y=7;
    int z=10;
    cout <<"x= "<<x<<" y= "<<y<<" z= "<<z<<"\n";
    cout << "all operand on right are 5 \n";
    cout <<"sum operator"<<(x+=5)<<"\n";
    cout <<"difference opperator"<<(x-=5)<<"\n";
    cout <<"product opperator"<<(y*=5)<<"\n";
    cout <<"division operator"<<(z/=5)<<"\n";
    return 0;

}
