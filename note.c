#include <stdio.h>

int main () {
    int a = 100;
    int b = a;

    a = a - 50;

    printf("%d\n",a);
    printf("%d\n",b);
}