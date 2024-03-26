#include <stdio.h>

// //2차원 배열의 원소 1씩 증가시키기
// int add_1_to_array(int (*arr)[2], int row);
// int main() {
//     int arr[4][2];
//     int i, j;

//     for (i = 0; i < 4; i++) {
//         for (j = 0; j < 2; j++) {
//             scanf("%d",&arr[i][j]);
//         }
//     }

//     add_1_to_array(arr, 4);

//     for (i = 0; i < 4; i++) {
//         for (j = 0; j < 2; j++) {
//             printf("arr[%d][%d]의 값: %d\n",i,j,arr[i][j]);
//         }
//     }
//     return 0;
// }


// //열의 수가 2인 배열만 고정적으로 받으며, 행의 수는 인자로 받는다.
// int add_1_to_array(int (*arr)[2], int row) {
//     int i, j;
//     for (i = 0; i < row; i++) {
//         for (j = 0; j < 2; j++) {
//             arr[i][j] += 1;
//         }
//     }
//     return 0;
// }

// 함수 포인터
int max(int a, int b);
int main() {
    int a, b;
    int (*pmax)(int, int);
    pmax = max;

    scanf("%d %d",&a, &b);
    printf("max(a,b): %d\n",max(a,b));
    printf("pmax(a,b): %d\n",pmax(a,b));

    return 0;
}


int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
    
    return 0;
}