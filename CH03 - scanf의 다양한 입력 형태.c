#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int result;
    int num1, num2, num3;

    printf("세 개의 정수 입력 : ");
    scanf("%d %d %d", &num1, &num2, &num3); 
    /*scanf 사용시 변수들의 메모리 주소가 필요하기 때문에 &를 이용*/
    result = num1 + num2 + num3;
    printf("%d + %d + %d = %d", num1, num2, num3, result);

    return 0;
}