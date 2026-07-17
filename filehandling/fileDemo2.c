#include<stdio.h>
//funciton with structure
void main()
{
 
    int rollno=123;
    char name[]={"raj"};

    FILE *fp;
    fp = fopen("user.txt","w");
    fprintf(fp,"\n rollno = %d",rollno);
    fprintf(fp,"\n Name = %s",name);
    fclose(fp);
   
}