#include<stdio.h>
#include<conio.h>

struct record
{
char   name[10];
int    number;
float  price;
int    quantity;
};

int main()
{
    struct record item;
    char  filename[10];
    int   response;
    FILE  *fp;
    long  n,n2;
    void append (struct record *x, FILE *y);

    

    fp = fopen("file1.txt", "a+");
    do
    {
    append(&item, fp);
    printf("\nItem %s appended.\n",item.name);
    printf("\nDo you want to add another item (1 for YES /0 for NO)?");
    scanf("%d", &response);
    }  while (response == 1);

    fseek(fp,0,SEEK_END); /*Set the file pointer at the end of file*/
    n=ftell(fp);      /* Position of last character  */
    fclose(fp);
    return 0;

}
void append(struct record *product, FILE *ptr)
{
    printf("\nItem name:");
    scanf("%s", &product->name);
    printf("Item number:");
    scanf("%d", &product->number);
    printf("Item price:");
    scanf("%f", &product->price);
    printf("Quantity:");
    scanf("%d", &product->quantity);

    //writing to the file
    fprintf(ptr, "%s %d %.2f %d\n",
    product->name,
    product->number,
    product->price,
    product->quantity);
}