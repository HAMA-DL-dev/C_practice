#include <stdio.h>
void hansu(int n){
    if(n<100){
      for(int i=1;i<100;i++){
      printf("%d\n",i);

    }
      printf("%d is total hansu",n);
    }
    else{
        int i;
        int cnt=99;
        int a,b,c;
        for(i=1;i<100;i++)printf("%d\n",i);
        for(i=100;i<=n;i++){
            a=i/100;
            b=(i/10)%10;
            c=i%10;

            if((c-b)==(b-a)){
             cnt++;
             printf("%d\n",i);
        }
        }
        printf("%d is total hansu",cnt);
    }
}

int main(){
    int n;
    printf("input the num: ");
    scanf("%d",&n);
    hansu(n);
    return 0;
}