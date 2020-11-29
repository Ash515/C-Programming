#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
printf("a is greater than b and c: %d");
else if(b>a && b>c)
printf("b is greater than c and a: %d");
else
printf("c is greater than a and b: %d");
}
