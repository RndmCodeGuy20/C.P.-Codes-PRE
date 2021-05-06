#include<stdio.h>
#include<conio.h>

int main()
{
int row,col,i,j;
    int mat[20][20];

    printf("Entered the number of rows and columns of the matrix: ");
    scanf("%d %d",&row,&col);

    //Input of the values of the matrix.
    
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("Enter the value of place [%d] [%d]: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }

    //Displaying the values of the matrix.

    printf("You entered the matrix: \n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){

            printf("%d \t", mat[i][j]);
        }
        printf("\n\n");
    }

    //Displaying the upper triangular matrix.

    printf("\n The upper triangular matrix is: \n\n");
    for ( i = 0; i < row; i++){
        for ( j = 0; j < col; j++){
            
            if (j>=i)
            {
                printf("%d \t", mat[i][j]);
            }
            else{
                printf("%d \t", 0);
            }
            
        }
      printf("\n\n");  
    }
    
return 0;
}