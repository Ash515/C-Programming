#include<stdio.h>
int main()
{
int p,n,r,si;
printf("\nEnter the principle Amount:",p);
scanf("%d",&p);
printf("\nEnter the no of Years:",n);
scanf("%d",&n);
printf("\nEnter the rate of Interest:",r);
scanf("%d",&r);
si=(p*n*r)/100;
printf("\n SIMPLE INTEREST:%d",si);
return 0;
}
