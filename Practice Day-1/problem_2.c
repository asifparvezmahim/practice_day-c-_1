#include <stdio.h>
int main()
{
    int a, b, sum, sub, mlt;
    float div;
    scanf("%d%d", &a, &b);
    sum = a + b;
    sub = a - b;
    mlt = a * b;
    div = a * 1.0 / b;
    printf("%d+%d=%d\n", a, b, sum);
    printf("%d-%d=%d\n", a, b, sub);
    printf("%d*%d=%d\n", a, b, mlt);
    printf("%d/%d=%.2f\n", a, b, div);
    return 0;
}
