# include<stdio.h>
void main(){
    int a=10;
    int *b=&a;  //pointer 
    printf("%d",*b);
    int c=a**b;
    printf("\n%d",c);

}
