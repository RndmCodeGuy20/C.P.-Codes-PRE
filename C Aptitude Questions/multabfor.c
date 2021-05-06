#include<stdio.h>
#include<conio.h>

int main()
{
int i,n,m;

printf("Enter the number whose table is to be printed: ");
scanf("%d",&n);
printf("\n\nTable of the given number is: \n");
for(i=1;i<=10;i++){

    m = n*i;
    printf("%d*%d=%d\n",n,i,m);
}

return 0;
}