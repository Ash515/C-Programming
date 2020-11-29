#include<stdio.h>
int main()
{
    double num;
    scanf("%lf",&num);
    if(num == 0)
    printf("it is zero");
    else if(num > 0)
    printf("%.1f is positive",num);
    else
    printf("%.1f is negative",num);
}

