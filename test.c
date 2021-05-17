#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int m = 10;

int sum(int *x, int *y)
{

    int sum;

    sum = *x + *y;
    printf("Output from function : %d and m = %d\n", sum, m);
    return sum;
}

int main()
{
    static int z;

    int a, b;

    scanf("%d %d", &a, &b);

    z = sum(&a, &b);

    printf("%d", z);

    return 0;
}