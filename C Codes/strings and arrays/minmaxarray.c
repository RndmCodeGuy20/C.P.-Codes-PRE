#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i;
    int num[n];
    
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    int min = num[0];

    int max = num[0];


    for(i=0;i<n;i++){
        printf("Enter the array element[%d]: ",i);
        scanf("%d",&num[i]);
    }

    for(i=0;i<n;i++){
        if(num[i]<min)
        min=num[i];
    }
    printf("The minimum number in the given array is: %d\n",min);

    for(i=0;i<n;i++){
        if(num[i]>=max)
        max=num[i];
    }
    printf("The maximum number in the given array is: %d\n",max);

    printf("The elements entered in the array are: ");
    for(i=0;i<n;i++){
        printf("%d\t",num[i]);
    }
    printf("\n");

return 0;
}