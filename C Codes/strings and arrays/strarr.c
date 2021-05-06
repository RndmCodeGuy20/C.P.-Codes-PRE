#include<stdio.h>
#include<conio.h>

int main()
{
int i=0;
char name[]="Hello World!";

while (name[i]!='\0')
{
    printf("%c ",name[i]);
    i++;
}
return 0;
}