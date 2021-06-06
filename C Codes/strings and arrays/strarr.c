#include<stdio.h>
#include<conio.h>

int main()
{
int i=0;
char name[]="Hello World!";
//*Using while method.
while (name[i]!='\0')
{
    printf("%c ",name[i]);
    i++;
}
//*Using string output method.
printf("%s", name);
return 0;
}