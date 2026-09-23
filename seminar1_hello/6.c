#include <stdio.h>
int main()
{
    int n;
    scanf("%i", &n);
    int i = 1;
    int m = 1;
    while (n != 1)
        {
            if (n > m)
            {
                m = n;
            }
            if (n % 2 == 0)
            {
                printf("%i ", n);
                n = n / 2;
                i += 1;
            }
            else
            {
                printf("%i ", n);
                n = 3 * n + 1;
                i += 1;
            }
            
        }
    printf("%i\n Length = %i, Max = %i", n, i, m);
}
