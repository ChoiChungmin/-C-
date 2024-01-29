#include <stdio.h>

int main(void)
{
    int num1=9, num2=2; //= 연산자 오른쪽에 있는 값을 연산자 왼쪽에 있는 변수에 대입한다
    printf("%d+%d=%d \n", num1, num2, num1+num2); // + 두 피연산자의 값을 더함
    printf("%d-%d=%d \n", num1, num2, num1-num2); // - 왼쪽의 피연산자 값에서 오른쪽의 피연산자 값을 뺀다
    printf("%dx%d=%d \n", num1, num2, num1*num2); // * 두 피연산자의 값을 곱한다
    printf("%d/%d의 몫=%d \n", num1, num2, num1/num2); // / 왼쪽의 피연산자 값을 오른쪽의 피연산자 값으로 나눈다
    printf("%d/%d의 나머지=%d \n", num1, num2, num1%num2); // % 왼쪽의 피연산자 값을 오른쪽의 피연산자 값으로 나눴을때 얻게 되는 나머지를 반환한다.
    return 0;
}