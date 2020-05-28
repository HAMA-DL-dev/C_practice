// 구조체 활용과 멤버의 접근
#include <stdio.h>
struct point
{
    double xPos;
    double yPos;
};

typedef struct point POINT;

int main(void){
    double num;
    POINT pnt;
    num=1.2;
    pnt.xPos=2.2;
    pnt.yPos=3.4;

    printf("num: %.2lf\n",num);
    printf("pnt.xPos: %.2lf\n",pnt.xPos);
    printf("pnt.yPos: %.2lf\n",pnt.yPos);

    printf("size of num: %d\n",sizeof(num));
    printf("size of pnt: %d\n",sizeof(pnt));

    return 0;
}
