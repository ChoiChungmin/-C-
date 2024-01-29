#include <stdio.h>

int main(void)
{
    int num1=12;
    int num2=12;
    printf("num1 : %d \n", num1);
    printf("num1++ : %d \n", num1++); // 12를 출력하고 다음부터는 1을 증가해서 출력해라
    printf("num1: %d \n\n", num1); // 12가 아닌 13이 출력

    printf("num2 : %d \n", num2);
    printf("++num2 : %d \n", ++num2); // 12가 아닌 1을 증가해서 출력해라. 13출력
    printf("num2: %d \n", num2); // 13 출력
    return 0;
}