#include<stdio.h>
#include<conio.h>

int main()
{
int i,j,n;

printf("Enter the number of rows needed: ");
scanf("%d",&n);

for(i=1;i<=n;i++){
    for(j=i;j<=n;j++){
        printf("%d",j);
        }
    printf("\n");
}

return 0;
}