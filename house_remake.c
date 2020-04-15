#include <stdio.h>

int house(int height); 

int main(void){
  int height;
  printf("make house!\n");
  printf("height: ");
  scanf("%d",&height);
  house(height);
  return 0;  
}

int house(int height){
  if(height%2==1){
    for(int n=0;n<height/2+1;n++){
      for(int blank=1;blank<height/2+1-n;blank++)printf(" ");
      for(int star=0;star<2*n+1;star++)printf("*");
      printf("\n"); 
	}
     for(int n=0;n<height/2;n++){
      for(int star=0;star<height;star++)printf("*");
      printf("\n");
	 }
  }

  else{
    for(int n=0;n<height/2;n++){
      for(int blank=0;blank<height/2-1-n;blank++)printf(" ");
      for(int star=0;star<2*(n+1);star++)printf("*");
      printf("\n");
	}

     for(int n=0;n<height/2;n++){
      for(int star=0;star<height;star++)printf("*");
      printf("\n");
	 }
  }
}