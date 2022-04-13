#include<stdio.h>
int main()
{
 int c,buff[255];
 FILE *fr,*fw;

 if((fr=fopen("file1.txt","r"))==NULL)
 {
  printf("File can't be open.");
  return 1;
 }
 if((fw=fopen("file2.txt","r+"))==NULL)
 {
  printf("File can't be open.");
  fclose(fr);
  return 1;
 }
 while(1)
 {
  c=fgetc(fr);
  if(feof(fr))
    break;
  c=~c;
 
  fputc(c,fw);
 
  
 }
 
printf("\n successfully converted to Uppercase.!!!\n");

 fclose(fr);
 fclose(fw);
 return 0;
}