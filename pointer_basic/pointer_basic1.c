#include <stdio.h>
int main(void){
    int a;
    int* pa;
    printf("input number: ");
    scanf("%d",&a);
    
    pa=&a;

    printf("a = %d\n",a); //변수가 저장하고 있는 값
    printf("address of a: %d\n",&a); //변수의 주소
    printf("pa pointing value: %d\n",*pa); //포인터가 가리키는 주소에 저장된 값
    printf("pa have an address: %d",pa); //포인터가 가리키는 주소
    printf("address of pa= %d",&pa); //포인터의 주소

/*
변수 pa는 입력값 a의 주소를 나타냄.
즉, pa 자체로도 메모리 공간에 따로 할당이 되어서
변수 a와 다른 주소값을 갖는 것임.
*/
    return 0;

}
