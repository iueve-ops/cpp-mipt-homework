#include <stdio.h>
int main()
{
    int a[1000];
    int n;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%i", &a[i]);
    }

    int j = 0;
    for(int i = 0; i < n; ++i)
    {
        if (a[i] < 0)
        {
            j +=1;
        }
        else
        {
            a[i-j] = a[i];
        }
    }

    for (int i = 0; i < n-j; ++i)
    printf("%i ", a[i]);

    printf("\n");
}