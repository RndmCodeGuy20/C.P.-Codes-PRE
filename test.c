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
    char ch = 104;
    printf("%d %c", z, ch);

    return 0;
}