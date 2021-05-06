#include<stdio.h>
#include<conio.h>

int main()
{
int i,j,n,k=1;

printf("Enter the number of rows needed: ");
scanf("%d",&n);

for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        printf("%d",k++);
    }
    printf("\n");
}

return 0;
}