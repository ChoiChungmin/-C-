#include <stdio.h>

int main(void)
{
    int num1 = 10;
    int num2 = 12;
    int result1, result2, result3;
    result1=(num1==num2); // num1과 num2가 같은가
    result2=(num1<=num2); // num1이 num2보다 작거나 같은가
    result3=(num1>num2); // num1이 num2 보다 큰가
    printf("result1 : %d \n", result1);
    printf("result2 : %d \n", result2);
    printf("result3 : %d \n", result3);
    return 0;
}