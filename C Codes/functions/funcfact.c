/**
 * @file funcfact.c
 * @author Shantanu Mane @RndmCodeGuy20 (shantanu.mane.200@outlook.com)
 * @brief 
 * @version  420.69
 * @date 2021-06-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <conio.h>

int factorial(int n);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("The factorial of %d is: %d", n, factorial(n));

    return 0;
}

int factorial(int n)
{
    int fac;
    if (n >= 1)
    {
        fac = n * factorial(n - 1);
    }
    else
    {
        fac = 1;
    }
    return (fac);
}