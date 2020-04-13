#include <stdio.h>
int main(void){
    printf("num: ");
    int input;
    scanf("%d",&input);
    int head=0;
    int mid=0;
    int tail=1;
    for(int i=0;i<input;i++){
        printf("%d ",head);
        mid=head+tail;
        head=tail;
        tail=mid;

    }
    
    return 0;
    
    }