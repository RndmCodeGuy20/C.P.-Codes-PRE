#include<stdio.h>
#include<conio.h>

int main()
{
int i,j,rows,spc,k,t=1;

printf("Enter the number of rows needed: ");
scanf("%d",&rows);

spc=rows;

for(i=1;i<=rows;i++){

    for(k=spc;k>=1;k--){
        printf(" ");
    }
    for(j=1;j<=i;j++){
        printf("%d ",t++);
    }
    spc--;
    printf("\n");
} 

return 0;
}