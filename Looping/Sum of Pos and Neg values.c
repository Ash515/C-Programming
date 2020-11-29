#include<stdio.h>
int main()
{
int a[100],num,psum=0,nsum=0,i;
printf("\nEnter the no.of values:");
scanf("%d",&num);
printf("\nEnter the values:",num);
for(i=0;i<num;i++)
{
        scanf("%d",&a[i]);
        if(a[i]>0)
         psum += a[i];
        else
         nsum +=a[i];
}
printf("\nSum of positive integers: %d",psum);
printf("\nSum of negative integers: %d",nsum);
printf("\nTOTAL SUM OF VALUES: %d",psum+nsum);
}
