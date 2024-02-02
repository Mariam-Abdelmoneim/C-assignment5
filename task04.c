#include <stdio.h>
#include <stdlib.h>
#define MAX 10


void sorting(int a[], int n)
{
    for (int k = 0; k < n-1; k++)
    {
        for (int i = 0; i < n-k-1; i++)
        {
            if(a[i] > a[i+1])
            {
                int temp = a[i];
                a[i] = a[i+1];
                a[i +1] = temp;
            }
        }
    }
}

int main()
{
    int arr[MAX], n;
    printf("n? ");
    scanf("%d", &n);
    printf("Elements? ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
    printf("Before Sorting:\n");
    for(int i = 0; i < n; i++)
    {
        printf("\t%d", *(arr + i));
    }
    printf("\n");

    sorting(arr, n);

    printf("After Sorting:\n");
    for(int i = 0; i < n; i++)
    {
        printf("\t%d", *(arr + i));
    }
    printf("\n");

}