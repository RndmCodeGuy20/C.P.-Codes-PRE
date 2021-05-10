#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("C:\\C.P. Codes\\Files\\file1.txt", "r");

    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
        {
            break;
        }

        printf("%c", ch);
    }
    printf("\n\n");
    fclose(fp);

    return 0;
}