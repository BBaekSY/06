#include <stdio.h>

/* Function declarations */
int sumTwo(int a, int b);
int square(int n);
int get_max(int x, int y);

int main(void)
{
    int sum;
    int squared;
    int max;

    sum = sumTwo(3, 5);
    squared = square(4);
    max = get_max(7, 2);

    printf("Sum: %d\n", sum);
    printf("Square: %d\n", squared);
    printf("Max: %d\n", max);

    return 0;
}

int sumTwo(int a, int b)
{
    return a + b;
}

int square(int n)
{
    return n * n;
}

int get_max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}