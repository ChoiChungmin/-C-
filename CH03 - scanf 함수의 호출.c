#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int result; // result, num1, num2 라는 변수 선언
    int num1, num2;

    printf("정수 one : ");
    scanf("%d", &num1); //사용자로부터 num1이라는 변수를 입력받음
    printf("정수 two : ");
    scanf("%d", &num2); //사용자로부터 num2라는 변수를 입력받음

    result = num1 + num2; //result라는 변수는 num1 에서 num2를 더한 값
    printf("%d + %d = %d \n", num1, num2, result);
    return 0;
}