#include <stdio.h>

int main ()
{
    int num1 = 15; //00000000 00000000 00000000 00001111
    int num2 = 20; //00000000 00000000 00000000 00010100
    int num3 = num1 & num2; // num1 과 num2의 비트단위 and
    printf("AND 연산의 결과 : %d \n", num3); // 00000000 00000000 00000000 00000100 = 4
    return 0;
}