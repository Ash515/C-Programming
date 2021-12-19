#include<stdio.h>
#include<stdlib.h>

void main(){
    int* p;
    int n,i;
    printf("Enter the n value:");
    scanf("%d",&n);
    p=(int*)malloc( n * sizeof(int));
    if(p==NULL){
       printf("\nMemory is not allocated");
       exit(0);
    }
    else{
        printf("\nMemory is successfully is allocated");
        for(i=0;i<n;++i){
            p[i]=i+1;
        }
        printf("\nThe array elements are:");
        for(i=0;i<n;++i){
            printf("%d",p[i]);
        }

    }
   

}