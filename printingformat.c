#include<stdio.h>

int main()
{
int a=10;
int *b;
b=&a;
printf("%d",*b);
printf("\n%p",b);
printf("\n%x",b);

}
