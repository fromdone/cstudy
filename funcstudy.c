#include <stdio.h>
#include <math.h>

// //function for add 4
// int addbox(int input) {
//     input += 4;
//     return input;
// }

// int main() {
//     int num;
//     printf("숫자를 입력해주세요: ");
//     scanf("%d",&num);

//     printf("4를 더하면 %d이 되지요!",addbox(num));

//     return 0;
// }

//function for calculating earning
// int calc_balance(int present_money, int today_earning) {
//     int balance = present_money+today_earning;
//     return balance;
// }

// int main() {
//     int present_money;
//     int today_earning;

//     printf("기존 잔고를 입력해주세요: ");
//     scanf("%d",&present_money);
//     printf("오늘 번 돈을 입력해주세요: ");
//     scanf("%d",&today_earning);

//     printf("현재 잔고는 %d입니다.",calc_balance(present_money,today_earning));

//     return 0;
// }

//function for add sequential numbers
// int adder(int last_num) {
//     int sum=0;
//     for (int i=1; i<=last_num; i++) {
//         sum += i;
//     }
//     return sum;
// }
// int main() {
//     int last_num;
//     printf("어느 숫자까지 더하시겠어요?: ");
//     scanf("%d",&last_num);

//     printf("1부터 %d까지의 합계는 %d입니다.",last_num,adder(last_num));

//     return 0;
// }

//function for find prime numbers until n
// int prime_finder(int last_num) {
//     int found_primes = 2;
//     int primes[last_num];
//     primes[0] = 2;
//     primes[1] = 3;

//     switch (last_num) {
//         case 2:
//             return 1;
//         case 3:
//             return 2;
//         case 4:
//             return 2;
//     }

//     int num=5;

//     while (num<=last_num) {
//         int check=0;
//         for (int i=0; i<found_primes; i++) {
//             if (num%primes[i] != 0) {
//                 check += 1;
//             } else {
//                 break;
//             }
//         if (check == found_primes) {
//             primes[found_primes] = num;
//             found_primes += 1;
//             }
//         }
//         num += 1;
//     }

//     return found_primes;
// }

// int main() {
//     int last_num;
//     printf("어느 수까지의 소수를 찾을까요?: ");
//     scanf("%d",&last_num);

//     printf("%d까지의 소수의 수는 %d개입니다.\n",last_num,prime_finder(last_num));

//     return 0;
// }

//function for factorize
int factorize_func(int num) {
    //입력된 숫자의 제곱근까지의 숫자로 하나씩 나눠보면서 맞을 경우 출력
    //마지막 숫자일 경우 (나눈 결과가 1일 경우) 마지막에 곱셈 기호 출력하지 않음
    int num_sqrt = (int)sqrt(num);
    int num_original = num;

    int div;

    printf("입력하신 %d의 소인수분해 결과: ",num);

    for (div=2; div<=num_original; div++) {
        while (num%div == 0) {
            if (div == num) {
                printf("%d\n",div);
                num = num/div;
                break;
            } else {
                printf("%d x ",div);
            }
            num = num/div;
        }
        if (num != 1 && div == num && div%2 != 0) {
            printf ("%d\n",div);
            break;
        }
    }

    return 0;    
}

int main() {
    int num;
    printf("어떤 수를 소인수분해 하시겠어요?: ");
    scanf("%d",&num);

    factorize_func(num);

    return 0;
}