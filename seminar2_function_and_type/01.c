#include <stdio.h>

int cube(int x)
{
    return x * x * x;
}

int main()
{
    int a;
    scanf("%i", &a);
    printf("%i\n", cube(a));
}