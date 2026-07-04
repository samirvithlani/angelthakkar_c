#include<stdio.h>
#include<string.h>

struct Student{

    int id;
    int rollNo;
    float pers;
    char name[100];

};


void getStudentData(){}
void printStudentData(){}

void main()
{
   
    //struct -->variable structure ref variable..
    struct Student s; //ref s-->data access

    printf("\n enter student name");
    gets(s.name);
    printf("\n enter student id :");
    scanf("%d",&s.id);
    printf("\n enter student ROLL NO:");
    scanf("%d",&s.rollNo);
    printf("\n enter student PERS :");
    scanf("%f",&s.pers);



    printf("\n student name = %s",s.name);
    printf("\n student id = %d",s.id);
    printf("\n student rollno = %d",s.rollNo);
    printf("\n student pers = %f",s.pers);

   
}