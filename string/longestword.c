#include<stdio.h>
#include<string.h>
void main(){

    char str[100]="hi this is india is",word[50],largest[50];
    int i=0,j=0,max=0;

    while(1){
        //str[0] == ' '  -->false
        //str[1]
        if(str[i]==' ' || str[i]=='\0'){
            word[j]='\0'; //hi
            if(strlen(word)>max){
                //2
                max = strlen(word);
                printf("\n %d",max);
                strcpy(largest,word);
            }
            j=0;
            if(str[i]=='\0'){
                break;
            }
        }
        else{
            //word[1] = h
            //word[2] = i
            word[j++]=str[i];
        }
        i++; //1 ,2
    }

    printf("%s",largest);
}