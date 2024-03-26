#include <stdio.h>

int main() {
    double num;
    
    printf("실수를 입력하세요: ");
    scanf("%lf",&num);

    int num_mult = (int)(num*(1e+2));
    int num_int_mult = ((int)num)*(1e+2);

    int diff=num_mult-num_int_mult;

    if (diff<0) {
        printf("%d\n",(-1)*diff);
    } else {
        printf("%d\n",diff);
    }

    printf("%d\n",num_mult);
    printf("%d\n",num_int_mult);

    return 0;
}