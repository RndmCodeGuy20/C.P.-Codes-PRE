#include<stdio.h>
#include<conio.h>

int main()
{
int i,j,rows,spc,k;

printf("Enter the number of rows needed: ");
scanf("%d",&rows);

spc=rows+3;

for(i=1;i<=rows;i++){

    for(k=spc;k>=1;k--){
        printf(" ");
    }
    for(j=1;j<=2*i-1;j++){
        printf("*");
    }
    spc--;
    printf("\n");
} 

return 0;
}