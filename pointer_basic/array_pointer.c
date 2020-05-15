#include <stdio.h>
int main(void){
    int a[]={1,2,3,4};
    int b[]={5,6,7,8};

    int* PA[2];
    PA[0]=a;
    PA[1]=b;

    printf("%d\n",*(PA[0]));    //1이 출력
    printf("%d\n",*(PA[0]+1));  //2가 출력
    printf("%d\n",*(PA[1]));    // 5 출력
    printf("%d\n",*(PA[1])+15); //5 더하기 15이므로 20 출력

    return 0;
}
