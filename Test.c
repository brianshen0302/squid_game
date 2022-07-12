#include<stdio.h>

int main(){

    int sidelen;
    char symbol;


    printf("enter column & rows (odds only) ");
    scanf("%d", &sidelen);
    

    printf("enter symbo ");
    scanf(" %c", &symbol);
    
    for(int i = 1; i <= sidelen; i++){

        for(int j = 1; j <= sidelen; j++){

            printf("%c", symbol);

        }
        printf("\n");
    }


    return 0;
}