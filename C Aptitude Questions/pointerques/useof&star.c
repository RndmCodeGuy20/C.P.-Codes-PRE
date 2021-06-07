/**
 * @file useof&star.c
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
    int m;
    float fx;
    char cht;
    int *ptr1;
    float *ptr2;
    char *ptr3;

    m = 300;
    fx = 300.600006;
    cht = 'z';

    ptr1 = &m;
    ptr2 = &fx;
    ptr3 = &cht;

    printf("\nAddress of m: %d", &m);
    printf("\nAddress of fx: %d", &fx);
    printf("\nAddress of cht: %d", &cht);

    printf("\nValue at address of m: %d", *ptr1);
    printf("\nValue at address of fx: %f", *ptr2);
    printf("\nValue at address of cht: %c", *ptr3);

    printf("\nAddress of m: %d", ptr1);
    printf("\nAddress of fx: %d", ptr2);
    printf("\nAddress of cht: %d", ptr3);

    printf("\nValue at address of m: %d", *&m);
    printf("\nValue at address of fx: %f", *&fx);
    printf("\nValue at address of cht: %c", *&cht);

    return 0;
}