#include <stdio.h>
// 1부터 9까지 숫자를 입력 받고 0을 입력 받으면 멈추면서
//빈도수를 출력하는 예제
int main(){
    
        int input;
        int count[9]={0}; //너 이자식아 너 이거 계속 까먹ㅇ더라?????????^?^?^?^?^?

        do{
        printf("press input integer(1~9): ");
        scanf("%d",&input);
        

        if(input<0 || input>9)printf("please input in the range of 1~9\n");
        
        else{
            *(count+(input-1))+=1; //1씩 증가 시킴.
        }
        }while(input!=0);
        for(int i=0;i<9;i++){
            printf("input %d : %d times\n",i+1,*(count+i));
        }
    
return 0;
}
