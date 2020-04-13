#include <stdio.h>
int main(void){
    int num;
    int sum=0;
    printf("input the number: ");
    scanf("%d",&num);
    for(int i=0;i<=num;i++){
        if(i%2){
            sum=sum+i;
        }
    }
    printf("the sum of number (%d-%d) is %d",0,num,sum);
    return 0;
}