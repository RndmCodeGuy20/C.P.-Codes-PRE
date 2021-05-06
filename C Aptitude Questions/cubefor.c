#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n;
    printf("Input the numbers: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){

        printf("Number is: %d and cube of the number %d is: %d\n",i,i,(i*i*i));
    }


return 0;
}