#include<stdio.h>
#include<conio.h>
int main()
{

    int a,b,c;

    printf("Enter the numbers: ");
    scanf("%d %d",&a,&b);

    c = a + b;

    if(c>=10){printf("c is greater than 10\n");}

    else if(c>=8){printf("c is greater than 8\n");}

    else if(c>=6){printf("c is greater than 6\n");}

    else if(c>=5){printf("c is greater than 5\n");}

    else if(c>=4){printf("c is greater than 4\n");}

    else if(c>=2){printf("c is greater than 2\n");}

    else if(c>=0){printf("c is greater than 0\n");}

    else{printf("c is a negative number");}
    return 0;
}