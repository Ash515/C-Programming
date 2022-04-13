#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fs, *ft;
    char ch;
    fs = fopen("file1.txt", "r");
    if (fs == NULL)
    {
        puts("\nError: File not found");
        exit(0);
    }
    ft = fopen("file2.txt", "w");
    if (ft == NULL)
    {
        puts("\nCannot open the target file");
        exit(0);
    }
    while (1)
    {

        ch = fgetc(fs);
        if (ch == EOF)
            break;
        else
            fputc(ch, ft);
    }
    fclose(fs);
    fclose(ft);
    printf("\nFile is Successfully copied.!!!\n");

    ft = fopen("file1.txt", "r");
    printf("\nThe contents of copied file is :\n");
    while ((ch = fgetc(ft)) != EOF)
        printf("%c", ch);
    fclose(ft);

    return 0;
}