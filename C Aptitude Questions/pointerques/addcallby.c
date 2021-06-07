/**
 * @file addcallby.c
 * @author Shantanu Mane @RndmCodeGuy20 (shantanu.mane.200@outlook.com)
 * @brief 
 * @version  420.69
 * @date 2021-06-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

long addnum(long *, long *);
int main()
{
    long a, b, sum;

    printf("Enter the two numbers: ");
    scanf("%ld %ld", &a, &b);

    sum = addnum(&a, &b);
    printf("\nThe sum of the numbers %ld and %ld is: %ld", a, b, sum);

    return 0;
}

long addnum(long *n1, long *n2)
{
    //Here address of a and b is given to n1 and n2.
    long sum;
    sum = *n1 + *n2; //Here address of n1 and n2 are dereferenced to give the values of n1 and n2.
    return sum;
}