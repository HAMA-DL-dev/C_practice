#include <stdio.h>
#include <stdlib.h>

void input(int* mat,int size);
void newinput(int* mat1,int* mat2,int* mat,int size1,int size2);
int main(){
    int a,b;
    printf("각 배열 몇 개?");
    scanf("%d %d",&a,&b);
    int* mat1=NULL;
    int* mat2=NULL;
    int* mat3=NULL;
    mat1=(int*)malloc(sizeof(int)*a);
    mat2=(int*)malloc(sizeof(int)*b);
    mat3=(int*)malloc(sizeof(int)*(a+b));
    
    input(mat1,a);
    input(mat2,b);
    
    newinput(mat1,mat2,mat3,a,b);

    printf("mat3={");
    
    for(int i=0;i<(a+b);i++){
        printf("%d ",*(mat3+i));
    }
    printf("}\n");

    free(mat1);
    free(mat2);
    free(mat3);
}

void input(int* mat,int size){
    for(int i=0;i<size;i++){
        printf("%d번째 요소: ",i);
        scanf("%d",(mat+i));
    }
}

void newinput(int* mat1,int* mat2,int* mat,int size1,int size2){

    for(int i=0;i<size1;i++){
        *(mat+i)=*(mat1+i);
    }
    for(int i=0;i<size2;i++){
        *(mat+(i+size1))=*(mat2+i);
    }

   int size_new=size1+size2;

   int temp;
   for(int j=0;j<size_new;j++){
    for(int i=0;i<size_new-1-j;i++){
       if(*(mat+i)>*(mat+(i+1))){
          temp=*(mat+i); 
          *(mat+i)=*(mat+(i+1));
          *(mat+(i+1))=temp;
       }
    }
   }
}