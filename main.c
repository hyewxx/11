#include <stdio.h>

int main(void) {
    char *pc;
    int *pi;
    double *pd;

    pc = (char *)10000;
    pi = (int *)10000;
    pd = (double *)10000;

    printf("before : pc = %d, pi = %d, pd = %d\n", (int)pc, (int)pi, (int)pd);

    pc++;
    pi++;
    pd++;

    printf("after : pc = %d, pi = %d, pd = %d\n", (int)pc, (int)pi, (int)pd);

    return 0;
}