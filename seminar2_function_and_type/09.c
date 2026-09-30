#include <stdio.h>

void alice(int n);
void bob(int n);

void alice(int n)
{
    if (n <= 1)
    {
        printf("%i\n", n);
        return;
    }
    n = n * 3 + 1;
    printf("%i\n", n);
    if (n % 2 == 0)
    {
        bob(n);
    }
    else
    {
        alice(n);
    }
}

void bob(int n)
{
    if (n <= 1)
    {
        printf("%i\n", n);
        return;
    }
    n = n / 2;
    printf("%i\n", n);
    if (n <= 1)
    {
        return;
    }
    if (n % 2 == 0)
    {
        bob(n);
    }
    else
    {
        alice(n);
    }
}

int main()
{
    int n;
    scanf("%i", &n);
    if (n % 2 == 0)
    {
        bob(n);
    }
    else if (n % 2 != 0)
    {
        alice(n);
    }
}