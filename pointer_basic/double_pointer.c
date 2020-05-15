/* 
이중포인터를 이용하여
값을 바꾸는 문제(ptr1은 쓰지 않는다.)
*/

#include <stdio.h>
int main(void){
    int n1,n2;
    int* ptr1;
    int* ptr2;
    int** dptr;

    ptr1=&n1;
    ptr2=&n2;
    *dptr=ptr1;

    printf("input n1 and n2:");
    scanf("%d %d",&n1,&n2);
    
    //이 부분부터

    ptr1=ptr2;
    ptr2=*dptr;
    dptr=&ptr2; 

    //여기까지가 핵심!!
    printf("*ptr1=%d\n",*ptr1);
    printf("*ptr2=%d\n",*ptr2);
    printf("**dptr=%d\n",**dptr);

    return 0;
}
