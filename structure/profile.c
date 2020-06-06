// 배열을 멤버로 하는 구조체

#include <stdio.h>
#include <string.h>

typedef struct _person
{
    char name[30];    //이름
    char ID[15];      //주민등록번호
    unsigned int age; //나이
}person;

void ShowPersonData(person prsn){
    printf("name: %s\n",prsn.name);
    printf("number: %s\n",prsn.ID);
    printf("age: %u\n",prsn.age);
}

int main(){
    person hayeon;
    person copyman;

    strcpy(hayeon.name,"오하연"); //구조체person의 멤버인 배열 초기화 하는 함수
    strcpy(hayeon.ID,"2019061603");//둘 다 배열이라서 strcpy를 씀.
    hayeon.age=22;

    copyman=hayeon;
    ShowPersonData(copyman);
    
    return 0;
}