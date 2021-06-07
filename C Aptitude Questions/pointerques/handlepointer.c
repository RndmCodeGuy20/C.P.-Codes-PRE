/**
 * @file handlepointer.c
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

int main()
{
    int m = 29, n;
    int *ab;

    printf("\nAddress of m: %d", &m);
    printf("\nValue of m: %d", m);

    ab = &m;

    printf("\nNow ab is assigned with the address of m.");
    printf("\nAddress of pointer ab: %d", &m);
    printf("\nContent of pointer ab: %d", *ab);

    m = 34;
    printf("\nAddress of pointer ab: %d", &m);
    printf("\nContent of pointer ab: %d", *ab);

    n = 7;
    ab = &n;
    printf("\nAddress of m: %d", &m);
    printf("\nValue of m: %d", *ab);
    return 0;
}