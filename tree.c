#include <stdio.h>
int main(void){
    int height;
    printf("height: ");
    scanf("%d",&height);
    for(int i=0;i<=height;i++){
        for(int blank=0;blank<height-i;blank++)printf(" ");
        for(int star=0;star<2*i-1;star++)printf("*");
        printf("\n");        
    }
    return 0;
}