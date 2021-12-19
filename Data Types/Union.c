#include<stdio.h>
#include<string.h>
union grade{
    char ashwin[2],kishore[2],hari[2],adhi[2];

};

void main(){
  printf("****Union****");
  union grade g;
 
  strcpy(g.ashwin,"F");
  strcpy(g.hari,"T");
  printf("\n%s\t%s",g.ashwin,g.kishore);
  
  union grade* r= &g;
  printf("\n%s",r->ashwin);


}