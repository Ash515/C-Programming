
#include<stdio.h>

int main()
{
     FILE *fp;
     
     long cnt=0;
     int c;

    
     if((fp=fopen("file1.txt","r"))==NULL)
      printf("\nFile dosen't exist.");
     else
     {
      while(1)
      {
       c=fgetc(fp);
       if(feof(fp))
        break;
       cnt++;
      }
      printf("\nFile have %ld characters. \n",cnt);
     }
     fclose(fp);
     return 0;
}