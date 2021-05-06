#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{   char str[1024];
   printf("Enter the string: ");
   scanf("%[^\n]%*c",str);
   printf("%s", str);
   
    return 0;
}