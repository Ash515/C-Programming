#include<stdio.h>
int main()
{
int num,value,i,sum=0,avg;
printf("\nEnter the no.of values to be entered:");
scanf("%d",&num);
printf("\nEnter the values: ");
for(i=0;i<num;i++)
{
        scanf("%d",&value);
        sum = sum + value;
        avg=(sum)/num;
}
        printf("\n Sum of the values=%d",sum);
        printf("\n Average of the values=%d",avg);

}
