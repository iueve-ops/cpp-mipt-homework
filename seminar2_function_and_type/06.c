#include <stdio.h>

int trib(int x)
{
    int t[1000];
    t[0] = 0;
    t[1] = 0;  
    t[2] = 1;
    for (int i = 3; i <= x; i++)
        t[i] = t[i - 1] + t[i - 2] + t[i - 3];
    return t[x];
}

int main()
{
    int a;
    scanf("%i", &a);
    printf("%i\n", trib(a));
}
