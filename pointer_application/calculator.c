#include <stdio.h>

void cal(int a,int b,double* sum,double* diff,double* mult,double* div);
//변수 이름이 같은거지 main에서의 자료들과 다른 것이다.
int main(){
    int a,b;
    double sum,diff,mult,div;

    printf("input n1 and n2: ");
    scanf("%d %d",&a,&b);
     
    cal(a,b,&sum,&diff,&mult,&div);
       
    printf("sum=%.2f\n",sum);
    printf("diff=%.2f\n",diff);
    printf("mult=%.2f\n",mult);
    printf("div=%.2f\n",div);

    return 0;
}

void cal(int a,int b,double* sum,double* diff,double* mult,double* div){
    *sum=a+b;
    *diff=a-b;
    *mult=a*b;
    *div=(double)(a/b);
}
