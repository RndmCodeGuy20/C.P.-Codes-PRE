#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int factorial(int n);

int main()
{
    int m;
    double sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &m);

    for (int i = 1; i <= m; i++)
    {
        sum += (i / factorial(i));
    }

    printf("The sum of the expression is : %lf", sum);

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