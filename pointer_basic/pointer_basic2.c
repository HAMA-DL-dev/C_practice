#include <stdio.h>
int main(void){
    int a; //일반적인 변수
    int* pa; //주소값을 나타내는 변수, 여기까지는 a랑 무관
    
    printf("input number: ");
    scanf("%d",&a);

    pa=&a; //주소값 변수pa에 a의 주소를 넣은 것.

    *pa=*pa-3; //*연산자는 주소값 변수가 실수값을 저장하게 함.

    printf("changed input: %d",*pa); 

    return 0;
    
}

// &: 주소값을 나타내는 연산자
// *: 주소값 변수가 숫자,문자 등 특정값을 갖게하는 연산자.
