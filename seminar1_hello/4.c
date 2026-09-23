#include <stdio.h>

int main()
{
    int n;
    scanf("%i", &n);
    int i;
    i = 1;
    while (i <=n)
    {
        printf("%i -> %i -> %i\n", i, i*i, i*i*i);
        i += 1;
    }

}