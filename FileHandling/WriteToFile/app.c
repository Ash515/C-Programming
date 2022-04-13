/*  C Program to write data into a file using fprintf() function  */

#include <stdio.h>
int main()
{
        FILE * fp;
        char file_name[50];

       
        fp = fopen ("app.txt", "w");

        fprintf(fp, "%s %s %s", "Welcome", "to", "ZohoCorp");
        printf("\nSuccessfully written to the file %s \n",file_name);

        fclose(fp);
        return 0;
}