#include <stdio.h>

int main(void)
{
    int i;
    float num=0.0; // 실수형 선언

    for(i=0; i<100; i++)
    num+=0.1; // 0.1 더하는 것을 100번 진행

    printf("o.1을 100번 더한 결과 : %f \n", num);
    return 0;
}