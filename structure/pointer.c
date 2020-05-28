// 구조체와 구조체 포인터

#include <stdio.h>
typedef struct _person
{
    char name[30];
    char ID[15];
    unsigned int age;
}person;


void ShowPersonData(person* ptr){
    printf("name: %s\n",ptr->name);
    printf("num: %s\n",(*ptr).ID);
    printf("age: %u\n",ptr->age);
}

int main(){
    person hayeon;
    person copyman;
    person* personPtr;
    strcpy(hayeon.name,"오 하연");
    strcpy(hayeon.ID,"2019061603");
    hayeon.age=22;

    copyman=hayeon;
    personPtr=&copyman;
    ShowPersonData(personPtr);
}