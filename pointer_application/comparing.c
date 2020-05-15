#include <stdio.h>
void f1(int a,int b,int result1);
int f2(int a,int b);
void f3(int a,int b,int* result3);
int main(){
    int a,b;
    int result1=1,result2=1,result3=1;
    printf("Please input #1: ");
    scanf("%d",&a);
    printf("Please input #2: ");
    scanf("%d",&b);
  
    f1(a,b,result1);
    result2=f2(a,b);
    f3(a,b,&result3);

    printf("processing of using normal variable in void function..\n");
    printf("result 1: %d\n",result1);
    printf("processing of using normal variable in int function..\n");
    printf("result 2: %d\n",result2);
    printf("processing of using normal variable in void function..\n");
    printf("result 3: %d\n",result3);

    return 0;
}

void f1(int a,int b,int result1){
   for(int i=0;i<b;i++){
       result1=result1*a;
   }
   result1=a;
}

int f2(int a,int b){
  int result2=1;
    for(int i=0;i<b;i++){
        result2=result2*a;
    }
    return result2;
}

void f3(int a,int b,int* result3){
    for(int i=0;i<b;i++){
        *result3=(*result3)*a;
    }
    
}
