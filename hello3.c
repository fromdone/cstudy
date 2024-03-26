#include <stdio.h>

int main()
{
    int a = 2;
    int b = 2;

    int c = a++;
    printf("%d %d \n", c, a);

    int d = ++b;
    printf("%d %d \n", d, b);

    return 0;
}