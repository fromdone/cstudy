#include <stdio.h>

//포인터 추가 개념
// int main() {
//     int arr[3] = {1,2,3};
//     int *parr;

//     parr = arr;
    
//     printf("arr[1]: %d\n",arr[1]);
//     printf("parr[1]: %d\n",parr[1]);

//     return 0;
// }

//포인터의 포인터
// int main() {
//     int a;
//     int *pa;
//     int **ppa;

//     pa = &a;
//     ppa = &pa;

//     a = 3;

//     return 0;
// }

//이차원 배열과 포인터
int main() {
    int arr[2][3]={{1,2,3},{4,5,6}};

    int (*parr)[3];

    parr=arr;

    printf("arr[1][1]: %d\n",arr[1][1]);
    printf("parr[1][1]: %d\n",parr[1][1]);


    return 0;
}