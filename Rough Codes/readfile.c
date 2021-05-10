#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *fp;

    char ch;

    fp = fopen("input.txt", "r");
    if (fp == NULL)
    {
        printf("Unable to open the file input.txt");
    }
    else
    {
        do
        {
            ch = getc(fp);
            putchar(ch);
        } while (ch != EOF);
        fclose(fp);
    };
   

    return 0;
}