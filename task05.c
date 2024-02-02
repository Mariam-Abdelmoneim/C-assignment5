#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 1, y = 2, z = 3;
    int *px = &x, *py = &y, *pz = &z;
    int *t;

    printf("<-- Before Swapping -->\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("px = %p, py = %p, pz = %p\n", px, py, pz);
    printf("*px = %d, *py = %d, *pz = %d\n", *px, *py, *pz);

    t = pz;
    pz = px;
    px = py;
    py = t;

    printf("<-- Swapping Pointers -->\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("px = %p, py = %p, pz = %p\n", px, py, pz);
    printf("*px = %d, *py = %d, *pz = %d\n", *px, *py, *pz);

}