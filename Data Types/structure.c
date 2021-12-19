# include<stdio.h>
#include<string.h>
struct details
{
    char name[6];
    int age;
    float cgpa;
    double phno;
};

void main(){
    printf("*****Structures****");
    struct details stud;
    strcpy(stud.name,"Ashwin");
    stud.age=21;
    stud.cgpa=8.0;
    stud.phno=7358228847;
        printf(" The student name is %s\n Age is %d\n CGPA is %d\n Phone number is%d",stud.name,stud.age,stud.cgpa,stud.phno);
}
