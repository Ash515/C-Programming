
#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch, file_name[20];
   FILE *fp;
   printf("Enter the name of file:: ");
   gets(file_name);
   fp = fopen(file_name,"r");
   if( fp == NULL )
    {
    printf("\nCan not open the file.");
        exit(0);
   }
   printf("\nThe contents of %s file is :\n", file_name);
   while( ( ch = fgetc(fp) ) != EOF )
      printf("%c",ch);
   fclose(fp);

   return 0;
}