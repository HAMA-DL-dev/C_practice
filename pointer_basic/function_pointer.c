#include <stdio.h>

void swap(int* i,int* j);

int main(){
    int i=30, j=80;
    int* pi,* pj;
    pi=&i;
    pj=&j;

    swap(pi,pj);

    printf("i=%d, j=%d",i,j);
    return 0;
}

void swap(int *i,int *j){
    int temp;
    temp=*i;
    *i=*j;
    *j=temp;

}
