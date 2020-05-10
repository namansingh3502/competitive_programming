#include<stdio.h>
int sumf();
int main(){
  int n,i,sum=0,values[100];
  int result;
  printf("Enter the number of integral values to add");
  scanf("%d",&n);
  printf("\n Enter the %d integral values :",n);
  if (n>0){
    for (i=0;i<n;i++){
      scanf("%d",&values[i]);
    }
  }
  result = sumf();
  printf("\n\n Sum of the given %d integral values is %d ",n,result);
}

int sumf()
{
  int sum,i,n;
  int values[100];
  for(i=0;i<n;i++)
  sum+=values[i];
return sum;
}