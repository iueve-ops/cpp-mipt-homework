#include <stdio.h>

void reverse(int a[1000], int n)
{
    int b;
    for (int i = 0; i < n / 2; i++)
    {
        b = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = b;
    }
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
    reverse(a, n);

    for (int i = 0; i < n; i++)
    {
        printf("%i ", a[i]);
    }
}