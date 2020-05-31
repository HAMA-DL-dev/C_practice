// 원 만들기
#define PI 3.14

typedef struct _point{
    double xPos;
    double yPos;
}point;

typedef struct _circle{
    point center;
    double rad;
}circle;

void ShowCircleInfo(const circle* ptr){
    printf("원의 중심: [%g, %g]\n",
    (ptr->center).xPos,(ptr->center).yPos);
    printf("원의 넓이: [%g]\n",
    (ptr->rad)*(ptr->rad)*PI);
}

int main(){
    circle cl={
        {1.1,2.2},
        2.5
    };
    ShowCircleInfo(&cl);
    return 0;
}
