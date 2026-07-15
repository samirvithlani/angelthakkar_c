#include<stdio.h>

struct  Student
{
    int id;
    char name[20];
};

//structure object-->address..
void display(struct Student *s){

    printf("\n id = %d",s->id);
    printf("\n nae=  %s",s->name);
}
void main()
{
    struct Student st={101,"kunal"};
    display(&st);
   
}