#include <stdio.h>

int main()
{
    int p, n;
    float si, r;
    printf("enter the values: \n");
    scanf("%d %d %f", &p, &n, &r);

    si = p * n * r / 100;
    printf("the intrest is %f \n", si);

    return 0;
}