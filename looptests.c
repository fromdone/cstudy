#include <stdio.h>

int main()
{
    //1번 문제
    //N을 입력받아 해당 줄 수의 별 삼각형 출력
    /*
    int line;

    printf("몇 줄 짜리 삼각형을 만들까요?: ");
    scanf("%d", &line);

    for (int i=1; i<=line; i++)
    {
        int blanks=line-i;
        int stars=2*i-1;

        while (blanks>0)
        {
            printf(" ");
            blanks--;
        }

        while (stars>0)
        {
            printf("*");
            stars--;
        }

        printf("\n");
    }
    */

    //2번 문제
    //입력받은 값의 역삼각형 출력
    int line;

    printf("몇 줄 짜리 삼각형을 만들까요?: ");
    scanf("%d", &line);

    for (int i=1; i<=line, i++;)
    {
        int blanks=i-1;
        int stars=(line-i)*2+1;

        printf("%d, %d \n", blanks, stars);

        /*while (blanks>0)
        {
            printf(" ");
            blanks--;
        }

        while (stars>0)
        {
            printf("*");
            stars--;
        }

        printf("\n");*/
    }

    return 0;
}