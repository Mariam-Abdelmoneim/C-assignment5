#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    printf("Before Change: x = %d\n", x);
    int *y = &x;
    *y = 20;
    printf("After Change: x = %d\n", x);
    return 0;
}
