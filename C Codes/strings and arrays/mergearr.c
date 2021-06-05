/**
 * @file mergearr.c
 * @author Shantanu Mane @RndmCodeGuy20 (shantanu.mane.200@outlook.com)
 * @brief   Program to merge two arrays in one single array.
 * @version  420.69
 * @date 2021-06-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int array1[20], array2[20], arrayRe[40];
    int i, j, k, size1, size2, size3;

    printf("Enter the number of elements in the first array : ");
    scanf("%d", &size1);

    for (i = 0; i < size1; i++)
    {
        printf("Enter the element at array1[%d] : ", i + 1);
        scanf("%d", &array1[i]);
    }

    printf("Enter the number of elements in the first array : ");
    scanf("%d", &size2);

    for (j = 0; i < size2; j++)
    {
        printf("Enter the element at array1[%d] : ", j + 1);
        scanf("%d", &array2[j]);
    }

    size3 = size1 + size2;

    for ( k = 0; k < size3; k++)
    {
        
    }
    


    return 0;
}