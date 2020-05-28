/*
구조체 변수의 활용
-함수의 인자로 전달 및 반환 가능.
-대입연산자의 피연산자로 사용 가능  ()
-구조체 변수를 이용한 사칙연산은 불가능
 =
*/

// 구조체 변수의 활용방법
typedef struct _point
{
    double xPos;
    double yPos;
}point;


point IncrePos(point pnt){ // 구조체 변수를 매개변수로 받는 함수.

    pnt.xPos++;
    pnt.yPos++;
    return pnt;
}

int main(){
    point p1,p2,p3;
    p1.xPos=0.5;
    p1.yPos=1.5;
    p2=p1;
    p3=IncrePos(p2); // 구조체 변수를 매개변수로 전달하여 p2에 대입.

    printf("X: %.2lf\n",p3.xPos);
    printf("Y: %.2lf\n",p3.yPos);
    return 0;
}
