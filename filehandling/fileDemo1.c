//file open mode:
// r read
// w write
// r+
// w+
#include<stdio.h>

void main()
{
 
    FILE *fp;
    //w mode --> location file available no* it will create automatically
    fp = fopen("demo1.txt","w");
    fputc('A',fp);
    fputs("\n hello this is line from code .",fp);
    fclose(fp);
   
}