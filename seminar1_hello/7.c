#include <stdio.h>
#include <math.h>

int main()
{
    int n, m;
    scanf("%i %i", &n, &m);
    int sum = 0;
    for (int i = 0;i <= n; ++i)
    {
        for (int j = 0; j <= m; ++j)
        {
            sum += pow(-1, i+j) * i*j;
        }
    }
    printf("%i\n", sum);
}