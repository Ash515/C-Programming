# include<stdio.h>
void main(){
    int a=10;
    int *b=&a;
    printf("%d",*b);
    int c=a**b;
    printf("\n%d",c);

}