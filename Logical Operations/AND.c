#include<stdio.h>
int main()
{
int a,b,c,d;
scanf("%d %d %d %d",&a,&b,&c,&d);
if (a > b && c == d)
        printf("a is greater than b AND c is equal to d\n");
    else
        printf("AND condition not satisfied\n");

    return 0;
}
