#include <iostream> 
using namespace std; 
  
int factorial(unsigned int n){

    if (n == 0) 
        return 1; 
    return n * factorial(n - 1); 
} 
  
int main() 
{ 
    int n,x,p;
    cin>>n>>x>>p;
	
	cout << factorial(n-1) % 1000000007 << endl; 
    
    return 0; 
} 
  