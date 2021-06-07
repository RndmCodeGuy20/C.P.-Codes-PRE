/**
 * @file basicdec.c
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
    int m, n, o;
    int* z;

    m = 10;

    printf("\nHere address of m is: %x", &m);
    printf("\nHere address of n is: %x", &n);
    printf("\nHere address of o is: %x", &o);

    z = &m;

    printf("\nHere value of m with de-referenced pointer is: %d", *z);

    return 0;
}