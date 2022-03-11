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
    float c = div(a, b);
    return 0;
}
