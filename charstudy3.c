#include <stdio.h>

// int main() {
//     char *pstr = "sentence";

//     printf("pstr: %s\n",pstr);
//     printf("%d\n","sentence");

//     return 0;
// }

/* 길이가 최대 100인 문자열을 입력받아서 문자열을 역순으로 출력하는 함수 */

// int reverse_sentence(char *input, char *result);
// int main() {
//     char input[101];
//     char reverse[101];

//     printf("문자열을 입력해주세요: ");
//     scanf("%s",input);

//     reverse_sentence(input, reverse);

//     printf("뒤집힌 문자열: %s\n",reverse);

//     return 0;
// }

// int reverse_sentence(char *input, char *result) {
//     int last_index = 0;

//     while (input[last_index]) {
//         last_index++;
//     }
//     int length = last_index;
//     int i;
//     for (i = 0; i < last_index; i++) {
//         result[i] = input[last_index-i-1];
//     }
//     result[length] = '\0';

//     return 0;
// }

/* 길이가 최대 100인 문자열을 입력받아서 소문자-대문자 교환해 출력하는 함수 */

// int capital_reverse(char *input, char *output);
// int main() {
//     char input[101];
//     char output[101];

//     printf("영문 문자열을 입력해주세요: ");
//     scanf("%s",input);

//     capital_reverse(input, output);

//     printf("대소문자를 뒤집으면: %s\n",output);

//     return 0;
// }

// int capital_reverse(char *input, char *output) {
//     //대문자의 아스키 코드는 65~90
//     //소문자의 아스키 코드는 97~122
//     //둘 사이의 차이는 32 (대문자+32 = 소문자)

//     // printf("%p\n",input);
//     // printf("%p\n",output);

//     while (*input) {
//         if (*input <= 90) {
//             *output = (*input)+32;
//             input++;
//             output++;
//         } else {
//             *output = (*input)-32;
//             input++;
//             output++;
//         }
//     }

//     // *output = '\0';

//     return 0;
// }

/* 두 개의 문자열을 입력받아서 같으면 같다 다르면 다르다 출력하는 함수 */
// int sen_compare(char *sen1, char *sen2);
// int main() {
//     char sen_1[100];
//     char sen_2[100];
    
//     printf("첫 번째 문장을 입력해주세요: ");
//     scanf("%s",sen_1);
//     printf("두 번째 문장을 입력해주세요: ");
//     scanf("%s",sen_2);

//     int digit = sen_compare(sen_1, sen_2);

//     if (digit == 1)
//         printf("두 문장은 같습니다.\n");
//     else
//         printf("두 문장은 다릅니다.\n");

//     return 0;
// }

// int sen_compare(char *sen1, char *sen2) {
//     int index1 = 0;
//     int index2 = 0;
//     int len1 = 0;
//     int len2 = 0;

//     while (sen1[index1]) {
//         len1 += 1;
//         index1 += 1;
//     }
//     while (sen2[index2]) {
//         len2 += 1;
//         index2 += 1;
//     }

//     if (len1 != len2)
//         return 0;
    
//     // printf("%d\n",len1);
//     // printf("%d\n",len2);
    
//     int i;

//     for (i = 0; i < len1; i++) {
//         if (sen1[i] != sen2[i]) {
//             return 0;
//         }
//     }

//     return 1;
// }

/* 문자열의 위치 검색 함수 */

int word_finder(char *input, char *search);
int main() {
    char input[100];
    char search[100];

    printf("문장을 입력해주세요: ");
    scanf("%s",input);
    printf("어떤 단어를 찾고 계신가요?: ");
    scanf("%s",search);

    int result = word_finder(input, search);

    if (result == -1)
        printf("해당 단어가 없습니다.\n");
    else
        printf("해당 단어는 문장의 %d번째 글자에서 시작합니다.\n",result+1);
}

int word_finder(char *input, char *search) {
    int starting_index = 0;

    while (input[starting_index]) {
        if (search[0] == input[starting_index]) {
            break;
        }
        starting_index++;
    }

    if (input[starting_index] == 0) {
        return -1;
    }

    int compare_index = 0;
    while (search[compare_index]) {
        if (search[compare_index] != input[starting_index+compare_index]) {
            return -1;
        }
        compare_index++;
    }
    return starting_index;
}