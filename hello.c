#include <stdio.h>

int main()
{
    char ch;
    short sh;
    int i;
    long lo;
    float fl;
    double du;

    printf("input char var: ");
    scanf("%c", &ch);

    printf("input short var: ");
    scanf("%hd", &sh);

    printf("input int var: ");
    scanf("%d", &i);

    printf("input long var: ");
    scanf("%ld", &lo);

    printf("input float var: ");
    scanf("%f", &fl);

    printf("input double var: ");
    scanf("%lf", &du);
    
    printf("char: %c, short: %d, int: %i ", ch, sh, i);
    printf("long: %ld, float: %f, double: %f \n", lo, fl, du);

    return 0;
}