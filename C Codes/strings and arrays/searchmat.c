#include <stdio.h>
#include <conio.h>

int main()
{
    int row, col, i, j, n, flag;
    int mat[20][20];

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &row, &col);

    //Input of the values of the matrix.

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter the value of place [%d] [%d]: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    //Displaying the values of the matrix.

    printf("You entered the matrix: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {

            printf("%d \t", mat[i][j]);
        }
        printf("\n\n");
    }
    printf("Enter the number you want to search in the matrix: ");
    scanf("%d", &n);

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (n == mat[i][j])
            {
                //rowi
                //colj
                printf("Your entered number is present in the matrix on the position %d,%d", i, j);
                break;
            }
        }
        break;
    }

    return 0;
}