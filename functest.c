#include <stdio.h>
#include <math.h>

// // 문제 1. 5명의 국어/수학/영어 성적을 입력받아서 평균 순서로 사람을 출력해주는 프로그램

// int calc_averages(int (*arr)[3], int students, double *averages);

// int main() {
//     int scores[5][3];
//     double averages[5];
//     int i, j, k;
//     for (i = 0; i < 5; i++) {
//         printf("%d번 학생의 국어/수학/영어 성적을 순서대로 입력해주세요.",i+1);
//         for (j = 0; j < 3; j++) {
//             scanf("%d",&scores[i][j]);
//         }
//     }
//     calc_averages(scores, 5, averages);
//     int count;
//     double localmax_val;
//     int localmax_index;
//     for (count = 0; count < 5; count++) {
//         localmax_val = -1.0;
//         localmax_index = -1;
//         for (k = 0; k < 5; k++) {
//             if (averages[k] > localmax_val) {
//                 localmax_val = averages[k];
//                 localmax_index = k;
//             }
//         }
//         printf("%d등은 %d번 학생이며, 평균은 %f점 입니다.\n", count+1, localmax_index+1, localmax_val);
//         averages[localmax_index] = -2.0;
//     }
//     return 0;
// }

// int calc_averages(int (*arr)[3], int students, double *averages) {
//     int i, j;
//     double sum;
//     for (i = 0; i < students; i++) {
//         sum = 0.0;
//         for (j = 0; j < 3; j++) {
//             sum += (arr[i][j]);
//         }
//         averages[i] = sum/3.0;
//     }
//     return 0;
// }

// 문제 2. n개의 숫자들의 최대공약수를 유클리드 호제법을 통해 구하기

// 문제 3. 재귀함수를 이용해서 n까지의 곱을 구하기

int multiplier(int num, int *result);

int main() {
    int num;
    int result = 1;
    
    printf("어느 숫자까지의 곱을 구할까요?: ");
    scanf("%d",&num);

    multiplier(num, &result);
    printf("1부터 %d까지의 곱은 %d입니다!\n",num,result);

    return 0;
}

int multiplier(int num, int *result) {
    if ((num-1) == 1) {
        *result *= num;
        return 0;
    }
    *result *= num;
    multiplier(num-1, result);

    return 0;
}
