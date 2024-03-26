#include <stdio.h>

// int change_val(int *pi) {
//     printf("--- change_val 함수 내부 진입 ---\n");
//     printf("pi의 값: %p\n", pi);
//     printf("pi가 가리키는 것의 값: %d\n",*pi);

//     *pi = 3;

//     printf("--- change_val 함수의 영역 끝 ---\n");
//     return 0;
// }

// int main() {
//     int i = 0;

//     printf("i 변수의 주소값: %p\n",&i);
//     printf("change_val 함수 호출 이전 i의 값: %d\n",i);
//     change_val(&i);
//     printf("change_val 함수 호출 이후 i의 값: %d\n",i);

//     return 0;
// }

//두 변수의 값을 교환
// int swap_value(int *a, int *b) {
//     int temp = *a;

//     *a = *b;
//     *b = temp;

//     return 0;
// }

// int main() {
//     int i, j;

//     i = 3;
//     j = 5;

//     printf ("Before swap: i=%d, j=%d\n",i,j);
//     swap_value(&i, &j);
//     printf ("After swap: i=%d, j=%d\n",i,j);

//     return 0;
// }

//입력한 값들의 배열을 모두 1씩 증가
// int add_to_array(int *parr);
// int main() {
//     int arr[3];
//     int i;

//     for (i=0; i < 3; i++) {
//         scanf("%d",&arr[i]);
//     }

//     add_to_array(arr);

//     printf("배열의 각 원소: %d, %d, %d\n",arr[0],arr[1],arr[2]);

//     return 0;
// }

// int add_to_array(int *parr) {
//     int i;
//     for (i = 0; i < 3; i++) {
//         parr[i]++;
//     }
//     return 0;
// }

//입력 받은 배열의 10개 원소 중 최대값을 출력

// int find_max_value(int *parr);
// int main() {
//     int nums[10];
//     int i;

//     for (i = 0; i < 10; i++) {
//         scanf("%d",&nums[i]);
//     }

//     printf("최대값은 %d입니다.\n",find_max_value(nums));

//     return 0;
// }

// int find_max_value(int *parr) {
//     int max_value=0;
//     int i;

//     for (i = 0; i < 10; i++) {
//         if (parr[i] > max_value) {
//             max_value = parr[i];
//         }
//     }

//     return max_value;
// }

// Q1. 10개의 원소를 출력받아 큰 순서대로 출력하는 함수
// int print_decreasing(int *parr);
// int main() {
//     int nums[10];
//     int i;
//     for (i = 0; i < 10; i++) {
//         scanf("%d",&nums[i]);
//     }

//     print_decreasing(nums);

//     return 0;
// }

// int print_decreasing(int *parr) {
//     int max_value = 0;
//     int max_index = 0;
//     int remains = 10;
//     int i;

//     while (remains > 0) {
//         for (i = 0; i < 10; i++) {
//             if (parr[i] > max_value) {
//                 max_value = parr[i];
//                 max_index = i;
//             }
//         }
//         printf("%d ",max_value);
//         parr[max_index] = 0;
//         max_value = 0;
//         max_index = 0;
//         remains -= 1;
//     }

//     return 0;
// }

//Q2. 2차원 배열의 각 원소에 1을 더하는 함수의 인자 모양