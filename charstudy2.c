#include <stdio.h>

/* 이상한 scanf */
// int main() {
//     int num;
//     char str[10];

//     printf("숫자를 입력하세요: ");
//     scanf("%d",&num);
//     printf("입력한 숫자: %d\n",num);

//     printf("문장을 입력하세요: ");
//     scanf("%s",str);
//     printf("입력한 문장: %s\n",str);

//     return 0;
// }

/* stdin 예제 */
int main() {
    char str1[10];
    char str2[10];

    printf("type sentence: ");
    scanf("%s",str1);
    printf("you wrote: %s \n",str1);

    printf("type sentence: ");
    scanf("%s",str2);
    printf("you wrote: %s \n",str2);

    return 0;
}