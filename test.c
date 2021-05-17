/**
 * @file test.c
 * @author Shantanu Mane (shantanu.mane.200@outlook.com)
 * @brief 
 * @version  420.69
 * @date 2021-05-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int n;

int m = 10;

int sum(int *x, int *y)
{

    int sum;

    sum = *x + *y;
    printf("Output from function : %d and m = %d\n", sum, m * 0);
    return sum;
}

int main()
{
    static int z;
    int a, b;

    scanf("%d %d", &a, &b);

    z = sum(&a, &b);
    char ch = {104};
    printf("%d %c %d", z, ch, n);

    return 0;
}