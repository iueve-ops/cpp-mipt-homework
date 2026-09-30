#include <stdio.h>

int count_even(int a[1000], int n)
{
    int c_even = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            c_even++;
        }
    }
    return c_even;
}

int main()
{
    int n;
    scanf("%i", &n);
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &a[i]);
    }
    printf("%i\n", count_even(a, n));
}