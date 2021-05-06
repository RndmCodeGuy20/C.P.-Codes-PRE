#include <stdio.h>
#include <conio.h>

void reverse(char str3[]);
void concatenate(char str4[]);
int main()
{
    char str1[20], str2[20];

    printf("Enter the string you want to reverse: ");
    scanf("%s", &str1);

    printf("Enter the string you want to concatenate with string - Hi My name is : ");
    scanf("%s", &str2);

    reverse(str1);
    concatenate(str2);

    return 0;
}
void reverse(char str3[])
{
    int num_alpha = 0, begin;
    char rev[20];
    while (str3[num_alpha] = '\0')
    {
        num_alpha++;
    }
    int end = num_alpha - 1;

    for (begin = 0; begin < num_alpha; begin++)
    {
        rev[begin] = str3[end];
        end--;
    }
    rev[begin] = '\0';

    printf("%s\n", rev);
}
void concatenate(char str4[])
{

    char strpre[20] = {"Hi my name is : "};
    int length, j;

    length = 0;
    while (strpre[length] != '\0')
    {
        length++;
    }
    for (j = 0; str4[j] = ('\0'); ++j, ++length)
    {
        strpre[length] = str4[j];
    }

    printf("After Concatenation: ");
    puts(strpre);
}