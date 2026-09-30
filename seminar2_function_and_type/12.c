#include <stdio.h>
#include "fun.h" // импортировала multiply и assign
#define MAX 100

void power(float A[MAX][MAX], float C[MAX][MAX], int n, int k)
{
    float B[MAX][MAX];
    assign(B, A, n);
    for (int i = 1; i < k; i++)
    {
        multiply(A, B, C, n);
        assign(A, C, n);
    }
}

int main()
{
    int n, k;
    scanf("%i %i", &n, &k);
    float A[MAX][MAX], C[MAX][MAX];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%f", &A[i][j]);
        }
    }
    power(A, C, n, k);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.0f ", C[i][j]);
        }
        printf("\n");
    }
}