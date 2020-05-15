#include <stdio.h> //이중 포인터 두 개를 이용하여 값을 변경하는 문제
int main(void){
   int n1=10;
   int n2=20;
   int* p1=&n1;
   int* p2=&n2;
   int** dp1=&p2;
   int** dp2=&p1;
   int** dtemp;

  printf("Step1\n");
  printf("\tvalue of dptr1:%ld\n",dp1);
  printf("\tvalue of *dptr1:%ld\n",*dp1);
  printf("\tvalue of **dptr1:%ld\n",**dp1);
  printf("\tvalue of dptr2:%ld\n",dp2);
  printf("\tvalue of *dptr2:%ld\n",*dp2);
  printf("\tvalue of **dptr2:%ld\n",**dp2);
   // 왼쪽 부분 스왑
    *dtemp=*dp1;
    *dp1=*dp2;
    *dp2=*dtemp;
   // 오른쪽 부분 스왑
    dtemp=dp1;
    dp1=dp2;
    dp2=dtemp;
     
  printf("Step2\n");
  printf("\tvalue of dptr1:%ld\n",dp1);
  printf("\tvalue of *dptr1:%ld\n",*dp1);
  printf("\tvalue of **dptr1:%ld\n",**dp1);
  printf("\tvalue of dptr2:%ld\n",dp2);
  printf("\tvalue of *dptr2:%ld\n",*dp2);
  printf("\tvalue of **dptr2:%ld\n",**dp2);

  return 0;
}

