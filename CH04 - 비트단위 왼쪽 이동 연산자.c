#include <stdio.h>

int main()
{
    int num = 15; // 00000000 00000000 00000000 00001111

    int result1 = num<<1; // 비트열을 왼쪽으로 1칸씩 이동
    int result2 = num<<2; // 비트열을 왼쪽으로 2칸씩 이동
    int result3 = num<<3; // 비트열을 왼쪽으로 3칸씩 이동

    printf("1칸 이동 결과 : %d \n", result1); // 00000000 00000000 00000000 00011110 = 30
    printf("2칸 이동 결과 : %d \n", result2); // 00000000 00000000 00000000 00111100 = 60
    printf("3칸 이동 결과 : %d \n", result3); // 00000000 00000000 00000000 01111000 = 120
    return 0;
}