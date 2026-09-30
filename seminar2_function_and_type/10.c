#include <stdio.h>
#define MAX 100 // 100 потому что на 1000 падает программа

void assign(float A[MAX][MAX], float B[MAX][MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = B[i][j];
        }
    }
}

int main()
{
    int n;
    scanf("%i", &n);
    float A[MAX][MAX], B[MAX][MAX];
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%f", &B[i][j]);
        }
    }
    assign(A, B, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.2f ", A[i][j]);
        }
        printf("\n");
    }
}