#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct inventory
{
    char *name[30];
    int num;
    float price;
}product[3], *ptr;


int main()
{
    
    printf("INPUT\n\n");
    for (ptr = product; ptr < product + 3; ptr++)
        scanf("%s %d %f", ptr->name, &ptr->num, &ptr->price);
    printf("\nOUTPUT\n\n");
    ptr = product;
    while (ptr < product + 3)
    {
        printf("%-20s %5d %10.2f\n",
               ptr -> name,
               ptr -> num,
               ptr -> price);
        ptr++;
    }

return 0;
}