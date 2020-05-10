#include<stdio.h>

int factorial(int);

int main(){
	int n,f;
	printf("Enter the value to get its factorial: ");
	scanf("%d",&n);
	f=factorial(n);
	printf("\n\nfactorial of %d is %d",n,f);
	return 0;
}
int factorial(int n){
	if(n==0){
		return n;
	}

	else if(n==1){
		return n;
	}

	else{
		return n*factorial(n-1);
	}
	return 0;
}
