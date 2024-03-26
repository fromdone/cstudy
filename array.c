#include <stdio.h>

int main() {

    int num = 5;
    int primes[1000];
    primes[0] = 2;
    primes[1] = 3;
    int i;

    int found = 2;

    for (;;) {
        int check=0;
        for (i=0; i<found; i++) {
            if (num%primes[i] != 0) {
                check += 1;
            } else {
                break;
            }
        }
        if (check==found) {
            primes[found] = num;
            found += 1;
        }
        if (found==1000) {
            break;
        }
        num++;
    }

    int j;

    for (j=0; j<50; j++) {
        printf("숫자 %d는 소수입니다.\n",primes[j]);
    }

    return 0;
}