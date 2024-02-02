#include <stdio.h>
#include <stdlib.h>

int summation(int *n1, int *n2)
{
    return *n1 + *n2;
}

int main()
{
    int in1, in2;
    printf("Two Numbers? ");
    scanf("%d %d", &in1, &in2);
    printf("The Sum = %d\n", summation(&in1, &in2));
    return 0;
}