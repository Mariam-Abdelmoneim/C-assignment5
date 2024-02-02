#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int result[MAX][MAX] ;

void scalar_mul(int a1[MAX][MAX], int a2[MAX][MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
                result[i][j] += a1[i][k] * a2[k][j];
        }
    }
}

int main()
{
    int n;
    int arr1[MAX][MAX], arr2[MAX][MAX];
    printf("n? ");
    scanf("%d", &n);
    printf("Elements of ARRAY #1: \n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            scanf("%d", (*(arr1 + i)+j));
    }
    printf("\nElements of ARRAY #2: \n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            scanf("%d", (*(arr2 + i)+j));
    }
    printf("\n");
    scalar_mul(arr1, arr2, n);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            printf("\t%d", *(*(result + i)+j));
        printf("\n");
    }

}