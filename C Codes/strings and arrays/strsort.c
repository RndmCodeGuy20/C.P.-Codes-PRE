#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
char string[100],temp;
int n,i,j;
printf("Enter the string of array: ");
scanf("%s",&string);

n = strlen(string);

for ( i = 1; i < n; i++)
{
    for ( j = 0; j < n-i; j++)
    {
        if (string[j]>string[j+1])
        {
            temp=string[j];

            string[j]=string[j+1];

            string[j+1]=temp;
        }
        
    }
    
}
printf("Sorted Array:\t");

printf("%s\n", string);



return 0;
}