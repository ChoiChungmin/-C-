#include <stdio.h>

int main(void)
{
    int num1, num2; // num1, num2 라는 변수 선언
    int num3 =30, num4 =40; // num3, num4 라는 변수 선언

    /* 변수의 이름은 알파벳, 숫자, 언더바로 구성. C언어는 대소문자를 구분함. 
    변수의 이름은 숫자로 시작할수 없음. 이름 사이에 공백이 삽입될 수 없다*/

    
    printf("num1: %d, num2: %d \n", num1, num2); // num1, num2 출력, 하지만 값이 없음
    num1=10; // 출력 명령 후에 변수를 선언. 오류발생
    num2=20; // 출력 명령 후에 변수를 선언. 오류발생

    printf("num1: %d, num2: %d \n", num1, num2);
    printf("num3: %d, num4: %d \n", num3, num4);
}

