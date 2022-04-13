#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct student
{
int rollno;
char name[50];
int m1,m2,m3;
}s1;

int buff[244];
int main()
{
    FILE *fp;
    fp=fopen("file1.txt","w");
    if(fp==NULL)
    {
    printf("File could not open");
    exit(0);
    }

    printf("Enter student details :: \n");
    printf("\nName :: ");
    scanf("%s",&s1.name);
    printf("Roll No :: ");
    scanf("%d",&s1.rollno);
    printf("Marks1 :: ");
    scanf("%d",&s1.m1);
    printf("Marks2 :: ");
    scanf("%d",&s1.m2);
    printf("Marks3 :: ");
    scanf("%d",&s1.m3);

    fwrite(&s1,sizeof(s1),1,fp); //sending pointer var 
     fread(buff, strlen(c)+1, 1, fp);
   printf("%s\n", buff);
    printf("\nRecord has been added successfully !!\n");
    fclose(fp);

    return 0;

}