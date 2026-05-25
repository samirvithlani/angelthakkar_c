#include<stdio.h>

void main(){


        int country,state;

        printf("\n Press 1 for India : ");
        printf("\n Press 2 for Usa : ");
        printf("\n Press 3 for China : ");
        scanf("%d",&country);

        switch (country)
        {
            case 1:
                    printf("\n welcome to india :");
                    printf("\n Press 1 fo Gujarat");
                    printf("\n Press 2 fo Mah");
                    printf("\n Press 3 fo Up");
                    scanf("%d",&state);
                    switch(state){
                        case 1:
                            printf("\n welcome to Gujrat");
                        break;
                        case 2:
                            printf("\n welcome to Mah");
                        break;
                        case 3:
                            printf("\n welcome to Up");
                        break;    
                    }
            break;
            case 2:
                    printf("\n welcome to Usa");
                    printf("\n Press 1 fo texas");
                    printf("\n Press 2 fo Cal");
                    printf("\n Press 3 fo New-York");
                    scanf("%d",&state);
            break;
        
        default:
            break;
        }



}