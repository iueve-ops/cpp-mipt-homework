#include <stdio.h>

int main()
{
    int n;
    scanf("%i", &n);
    int a[n], s[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%i", &a[i]);
        s[i] = 0;
        int x = a[i];
        while (x != 0)
        {
            int b = x % 10;
            s[i] += b;
            x = x / 10;
        }
    }

    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - 1 - j; i++)
        {
            if (s[i] > s[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1]; //меняем местами
                a[i + 1] = temp; 

                temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;
            }
        }
    }


    for (int i = 0; i < n; i++)
    {
        printf("%i ", a[i]);
    }

    return 0;
}