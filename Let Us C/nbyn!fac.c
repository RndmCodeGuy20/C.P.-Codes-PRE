#include <stdio.h>
#include <conio.h>
int main()
{
    int j;
    float i, fact, sum = 0;
    
   
    for (i = 1; i <= 9; i++)
    {
        fact = i; //factorial of the series
        for (j = 1; j < i; j++)
            fact = fact * j;

         //terms of the series
        sum += i / fact; //sum of the terms of the series
    }
    printf("%f is the sum of the series.", sum);
  
    return 0;
}