#include <stdio.h>

int main(void)
{
    int num1 = 10; //변수에 정수 값 10을 할당
    int num2 = (num1--)+2; 
    /*num1에 1을 감소. 하지만 후위 감소이므로 해당 줄에서는 10+2 = 12가 저장됨 이후 num1이 오면 10이 아닌
    9가 저장됨*/
    printf("num1 : %d \n", num1); 
    printf("num2 : %d \n", num2);
    return 0;
}