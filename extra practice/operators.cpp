#include<iostream>
using namespace std;

int main() {
    int sum1 = 30 + 10;
    int sum2 = sum1 + 10;
    int sum3 = sum1 + 10 + sum2;//addition

    int difference = sum2 - 10;//subtraction

    int product = difference * 5;//multiplication with fraction

    double division = product /7;//division till last possible value
    int quotient = product/7;//quotient


    cout << sum1 << "\n";
    cout << sum2 << "\n";
    cout << sum3 << "\n";
    cout << difference << "\n";
    cout << product << "\n";
    cout << division << "\n";
    cout << "remainder is " << product%7 << "\n";
    return 0;


}
