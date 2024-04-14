#include <stdio.h>

int main()
{
    int num1=0xA7, num2=0x43; //0xA = 0x으로 시작하면 16진수로 인식. 계산은 앞자리에 16을 곱하고 뒤에 수를 더한다.
    int num3=032, num4=024; //0으로 시작하면 8진수로 인식. 계산은 앞자리에 8을 곱하고 뒤에 수를 더한다.

    printf("0xA7의 10진수 정수 값 : %d \n", num1); // 16진수를 10진수로
    printf("0x43의 10진수 정수 값 : %d \n", num2); // 16진수를 10진수로
    printf(" 032의 10진수 정수 값 : %d \n", num3); // 8진수를 10진수로
    printf(" 024의 10진수 정수 값 : %d \n", num4); // 8진수를 10진수로

    printf("%d-%d=%d \n", num1, num2, num1-num2);
    printf("%d+%d=%d \n", num3, num4, num3+num4);

    return 0;
}