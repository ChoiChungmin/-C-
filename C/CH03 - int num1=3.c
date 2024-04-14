#include <stdio.h>

int main(void)
{
    int num1=3;
    int num2=4;
    int result=num1+num2; //num1과 num2의 더한값을 result로 선언
    printf("덧셈 결과 : %d \n", result); //
    printf("%d+%d=%d \n", num1, num2, result);
    printf("%d와(과) %d의 합은 %d 입니다. \n", num1, num2, result);
    return 0;
}