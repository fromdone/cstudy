#include <stdio.h>

// int main() {

//     int a;
//     int *p;

//     a = 2;
//     p = &a;

//     printf("a의 주소 직접 출력: %p\n",&a);
//     printf("a의 주소를 저장한 포인터의 값 출력: %p\n",p);

//     printf("a의 값: %d\n",a);
//     printf("p가 가리키는 메모리 위치의 값: %d\n",*p);

//     return 0;
// }

// 포인터의 덧셈

// int main() {
//     int a;
//     int *pa;
//     pa = &a;

//     printf("value of pa: %p\n",pa);
//     printf("value of pa+1: %p\n",pa+1);

//     return 0;
// }

//배열 내부 값의 포인터?

int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int* parr;
    parr = &arr[0];
    int i;

    for (i=0; i<10; i++) {
        printf("배열 요소 arr[%d]의 시작 주소값: %p\n",i,&arr[i]);
        printf("배열 시작 주소값에 인덱스 %d를 더한 값: %p\n",i,parr+i);

        if (&arr[i]==parr+i) {
            printf("일치\n");
        } else {
            printf("불일치\n");
        }
    }

    return 0;
}