#include<stdio.h>
int main()
{
int m,sum=0,i,value;
printf("Enter the no.of values :");
scanf("%d",&m);
for(i=0;i<m;i++)
{
        scanf("%d",&value);
        sum = sum + value;
}
printf("sum: %d\n",sum);
}
