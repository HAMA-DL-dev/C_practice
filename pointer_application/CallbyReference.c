#include <stdio.h>
void CallbyVal(int i,int count); // count를 1씩 증가
void CallbyRef(int i,int* pcount); 
int main(void){
    int count=0;
    int* pcount=&count;
  
  printf("[main] value of count: %d ,address of count:%ld\n",count,&count);
  // CallbyValue 함수를 쓴 경우
  printf("Using CallbyVal\n");
  for(int i=0;i<10;i++){
      CallbyVal(i,count);
      if(count==3)break;
  }
  printf("[main] value of count: %d ,address of count:%ld\n",count,&count);


  // CallbyReference 를 쓴 경우
  for(int i=0;i<10;i++){
      CallbyRef(i,pcount);
      if(count==3)break;
  }
  printf("[main] value of count: %d ,address of count:%ld\n",*pcount,pcount);
  //
  return 0;
}

void CallbyVal(int i,int count){
    count++;
    printf("\t[%2dth CallbyVal] Valude of count : %d,Address of count:%ld\n",i,count,&count);
}
void CallbyRef(int i,int* pcount){
    (*pcount)++;
    printf("\t[%2dth CallbyVal] Valude of count : %d,Address of count:%ld\n",i,*pcount,pcount);
}
