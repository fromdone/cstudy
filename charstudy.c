#include <stdio.h>

/* 문자열에서 null의 개념 익히기 */
// int main() {
//     char null_1 = '\0';
//     char null_2 = 0;
//     char null_3 = (char)NULL;

//     char not_null = '0';

//     printf("null의 아스키 코드 값: %d, %d, %d \n",null_1,null_2,null_3);
//     printf("문자 0의 아스키 코드 값: %d \n",not_null);

//     return 0;
// }

/* 문자열의 시작 */
// int main() {
//     char sentence_1[4] = {'A','b','C','\0'};
//     char sentence_2[4] = {'A','b','C',0};
//     char sentence_3[4] = {'A','b','C',(char)NULL};
//     char sentence_4[4] = {"AbC"};

//     printf("%s \n",sentence_1);
//     printf("%s \n",sentence_2);
//     printf("%s \n",sentence_3);
//     printf("%s \n",sentence_4);

//     return 0;
// }

/* 포인터 간단 복습 */
// int main() {
//     char word[30] = {"long sentence"};
//     char *str = word;

//     printf("%s \n",str);

//     return 0;
// }

/* 문자열 길이 세기 */

// int str_length(char *str);
// int main() {
//     char str[] = {"Nice to meet you."};

//     printf("현재 문자열은 <%s>입니다.",str);
//     printf("이 문자열의 문자 수는 %d 입니다.",str_length(str));

//     return 0;
// }

// int str_length(char *str) {
//     int result = 0;

//     while (str[result]) {
//         result += 1;
//     }

//     return result;
// }

/* 두 개의 문자열 비교 함수 */
//같으면 1, 다르면 0을 리턴

int str_compare(char *str1, char *str2);
int main() {
    char line_1[] = "Helloo";
    char line_2[] = "Helloo";

    printf("%d \n",str_compare(line_1, line_2));

    return 0;
}

int str_compare(char *str1, char *str2) {
    int length_1 = 0;
    int length_2 = 0;

    while (str1[length_1]) {
        length_1 += 1;
    }

    while (str2[length_2]) {
        length_2 += 1;
    }

    if (length_1 != length_2) {
        return 0;
    }

    int i;
    for (i = 0; i < length_1; i++) {
        if (str1[i] != str2[i]) {
            return 0;
        }
    }

    return 1;
}