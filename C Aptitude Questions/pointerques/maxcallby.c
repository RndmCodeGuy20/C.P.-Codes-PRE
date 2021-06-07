/**
 * @file maxcallby.c
 * @author Shantanu Mane @RndmCodeGuy20 (shantanu.mane.200@outlook.com)
 * @brief 
 * @version  420.69
 * @date 2021-06-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <conio.h>

long numCompare(long *, long *);
int main()
{
    long a, b, max;

    printf("Enter the two numbers: ");
    scanf("%ld %ld", &a, &b);

    max = numCompare(&a, &b);

    printf("The maximum of the two numbers is: %ld", max);

    return 0;
}

long numCompare(long *n1, long *n2)
{

    long max;
    if (*n1 > *n2)
    {
        max = *n1;
    }
    else
    {
        max = *n2;
    }

    return max;
}