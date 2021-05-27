#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int m;
    float fact;
    double sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &m);

    for (int i = 1; i <= m; i++)
    {
        fact = i;

        for (int j = 0; j < m; j++)
        {
            fact = fact * j;
        }
        sum += i / fact;
    }

    printf("The sum of the expression is : %lf", sum);

    return 0;
}
