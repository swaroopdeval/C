#include<stdio.h>
int main()
{
  long int N[100000],T,a,b,c,sum,i;
  scanf("%ld",&T);
  for(i=0;i<T;i++)
  {
    scanf("%ld",&N[i]);
    a=(N[i]-1)/3;
    b=(N[i]-1)/5;
    c=(N[i]-1)/15;
    sum=(3*a*(a+1))/2+(5*b*(b+1))/2-(15*c*(c+1))/2;
    printf("%ld\n",sum);
  }
  return 0;
}
