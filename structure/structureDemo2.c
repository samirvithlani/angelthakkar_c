#include<stdio.h>

struct Employee
{
    int id;
    float sal;
    char name[40];
};


void main()
{
   
    struct Employee e[3];

    printf("\n enter 1st emp id");
    scanf("%d",&e[0].id);
    printf("\n enter 1st emp sal");
    scanf("%f",&e[0].sal);
    printf("\n enter 2nd emp id");
    scanf("%d",&e[1].id);
    printf("\n enter 2nd emp sal");
    scanf("%f",&e[1].sal);


    printf("\n  1st emp id = %d",e[0].id);
    printf("\n  2nd emp id = %d",e[1].id);
    printf("\n  1st emp sal = %f",e[0].sal);
    printf("\n  2nd emp sal = %f",e[1].sal);
    
    
    

   
}