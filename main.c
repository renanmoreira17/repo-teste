#include "stdio.h"

int soma(int a, int b)
{
    return a+b;
}

int mult(int a, int b)
{
    return a*b;
}

float div(int a, int b)
{
    return (float)a/b;
}

int main()
{
    int a, b;
    printf("Hello World!\n");
    scanf("%d %d", &a, &b);
    int c = mult(a, b);
    float d = div(a, b);
    printf("%d\n%f\n", c, d);
    return 0;
}
