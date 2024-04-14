#include <stdio.h>

int main()
{
    int num1=1, num2=2;
    printf("Hello "), printf("world! \n"); // 콤마를 이용해서 둘 이상의 문장을 한 행에 삽입 가능
    num1++, num2++; // 후위 증가. num1=1, num2=2 인 상태에서 1을 더해서 출력
    printf("%d ", num1), printf("%d ", num2), printf("\n");
    return 0;
}