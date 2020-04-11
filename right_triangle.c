#include <stdio.h>
int main(void){
    int height;
    printf("height: ");
    scanf("%d",&height);
    for(int y=0;y<height;y++){
        for(int x=0;x<=y;x++)
        printf("*");
        printf("\n");
    }
    return 0;
}