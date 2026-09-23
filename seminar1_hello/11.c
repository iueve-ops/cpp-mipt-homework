#include <stdio.h>
int main()
{
    int n,m;
    scanf("%i %i", &n, &m);
    int a[n*m];
     for (int i = 0; i < n*m; ++i)
    {
        scanf("%i", &a[i]);
    }

    for (int j = 0; j < m; ++j)
    {
        int sum = 0;
        for (int i = 0; i < n * m; ++i)
        {
            if (i % m == j)
            {
                sum += a[i];
            }
        }

        printf("%i ", sum);
    }
}