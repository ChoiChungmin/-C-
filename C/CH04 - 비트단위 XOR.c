#include <stdio.h>

int main()
{
    int num1 = 15; // 00000000 00000000 00000000 00001111
    int num2 = 20; // 00000000 00000000 00000000 00010100
    int num3 = num1 ^ num2; //00000000 00000000 00000000 00011011 = 27
    printf("XOR 연산의 결과 : %d \n", num3); // ^는 둘중 하나만 1일때
    return 0;
}