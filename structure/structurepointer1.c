#include<stdio.h>
struct  Student
{
    int id;
    char name[20];
};

void main()
{
    
    struct Student s = {1,"amit"};
    //printf("%d",s.id);
    //pointer ref stuct
    struct Student *ptr = &s;
    printf("%d",ptr->id);

    ptr->id = 101;

    printf("\n %d",s.id);
    printf("\n %d",ptr->id);
    



   
}