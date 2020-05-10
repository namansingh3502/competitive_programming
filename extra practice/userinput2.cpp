#include<iostream>
using namespace std;
int main() {
    double x,y;//used double to handle decimal values too
    cout << "write your first number";
    cin >> x;
    cout << "write your second no";
    cin >> y;
    double sum = x+y;
    cout << sum;//it will show sum of whole and factional number too
    cout << " Sum of "<< x << " and " << y << " equals to " << sum;
    return 0;
}
