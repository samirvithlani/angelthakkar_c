#include<stdio.h>

struct  Student
{
    int id;
    char name[20];
};

// void display() //no return
// int display() // int value return
// floar displ ()//

struct Student* getStudent(){

     static struct Student s={1001,"ajay"};
    return &s;//stu address
    
}

void printStudent(struct Student *s){

    printf("\n id = %d",s->id);
    printf("\n name =%s",s->name);
}
void main()
{
    
    struct Student *st;
    st = getStudent();
    printStudent(st);
   
}