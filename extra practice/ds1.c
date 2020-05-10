#include<stdio.h>

int swap(int*,int*);


int main(){
	int n,m,i,numb1,numb2,max,min;
	
	//taking limit for array
	printf("Enter the number of digits to compare: ");
	scanf("%d",&n);
	printf("Enter the values \n\n");

	//read first number

	//if n is odd
	scanf("%d",&max);
	min=max;
	m=n-1;

	//if n is even
	if (n%2==0)
	{	
		scanf("%d",&min);
			if(max<min)
			{
				swap(&max,&min);
				m-=1;
			}

	}

	//filling of arrays
	for(i=1;i<=m/2;i++)
	{
		scanf("%d %d",&numb1,&numb2);

		//comparing numb1 and numb2 and storing them in large and smaller array
		
		if(numb1>numb2)
		{
			if(numb1>max) 	{	max=numb1; }
			if(numb2<min)	{	min=numb2; }
		}

		else if(numb2>numb1)
		{
			if(numb2>max)	{	max=numb2;	}
			if (numb1<min)	{	min=numb1;	}
		}
	}
	
		//printing the max and min values
		printf("\n MAX = %d and MIN = %d ",max,min);

	return 0;

}

int swap(int *n1, int *n2)
{
	int temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;

	return 0;
}



