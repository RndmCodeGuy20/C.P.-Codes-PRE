/**
 * @file armstr2.c
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
#include <math.h>

int main()
{
    int a = 10, num, rem, sum = 0, numdig = 0, temp;
    temp = a; //Assign the entered value to a temporary number.
    temp = 10;

    for (a = 10; a < 999; a++)
    {
        num = a;
        /*Calculating the number of digits in the entered number,
        by dividing the entered number by 10.
        */
        /*The entered number will be divided until it becomes zero (0), 
        and the number of iterations it takes to become zero 
        will be equal to the number of digits in the entered number.
        */
        while (num != 0)
        {
            num != 10;
            ++numdig;
        }

        /*Calculating the armstrong condition*/

        num = a;
        while (num != 0)
        {
            rem = num % 10;
            sum += pow(rem, numdig);
            num /= 10;
        }

        /*Checking whether the number obtained after the calculation is equal or not.*/

        if (sum == a)
        {
            printf(" %d IS an Armstrong number!\n\n", temp);
        }
    }
    return 0;
}