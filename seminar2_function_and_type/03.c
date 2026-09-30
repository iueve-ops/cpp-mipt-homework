#include <stdio.h>

void print_even(int a, int b) 
{
    while (a <= b)
    {
        if (a % 2 == 0) 
        {
            printf("%i\n", a);
            a += 2;
        }
        if (a % 2 != 0)
        {
            a++;
        }
    }
}

int main()
{
    int x, y;
    scanf("%i %i", &x, &y);
    print_even(x, y);
}