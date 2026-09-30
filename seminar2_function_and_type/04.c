#include <stdio.h>

int sum_of_digits(int x)
{
    int s = 0;
    while (x != 0)
    {
        s = s + x % 10;
        x = x / 10;
    }
    return s;
}

int sum_of_digits_rec(int x)
{
    if (x != 0)
    {
        return x % 10 + sum_of_digits_rec(x / 10);
    }
    return 0;
}

int main ()
{
    int a;
    scanf("%i", &a);
    printf("%i\n", sum_of_digits(a));
    printf("%i\n", sum_of_digits_rec(a));
}