#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;

    fptr = fopen("Stud_info_file.txt", "r");

    if (fptr == NULL)
    {
        printf("Error opening the file!!!");
        return 1;
    }

    printf("\nStudents Information --> \t\n");

    char c = fgetc(fptr);

    while (c != EOF)
    {
        putchar(c);
        c = getc(fptr);
    }
    fclose(fptr);

    return 0;
}