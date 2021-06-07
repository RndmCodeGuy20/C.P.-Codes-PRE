/**
 * @file testfunc.c
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
struct student
{
    char name[20];
    int roll_num;
    long long phone_num;
} st1;

int main()
{
    printf("Enter the credentials of the student: ");
    scanf("%s %d %lld", &st1.name, &st1.roll_num, &st1.phone_num);

    printf("%s %d %lld", st1.name, st1.roll_num, st1.phone_num);

    return 0;
}