#include<stdio.h>
#include<string.h>

// int main(){


// }

int main7(){

    double prices[] = {5.0, 10.0, 60.0, 900.0};

    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){
        printf("$%.2lf\n", prices[i]);
    }
}

int main6(){

    double prices[] = {5.0, 6.0, 10.0, 100.0};

    printf("%lf", prices[0]);
}

int main5(){

    int column;
    int row;
    char symbol;

    printf("enter rows ");
    scanf("%d", &row);

    printf("enter column ");
    scanf("%d", &column);
    

    printf("enter symbo ");
    scanf(" %c", &symbol);
    
    for(int i = 1; i <= row; i++){

        for(int j = 1; j <= column; j++){

            printf("%c", symbol);

        }
        printf("\n");
    }


    return 0;
}

int main4(){

    int num = 0;
    int sum = 0;

    do{
    
        printf("enter a number.");
        scanf("%d", &num);

        if(num > 0){

            sum += num;
        }
    }while(num > 0);

    printf("sum = %d", sum);

    return 0;
}

/* 3
int main3(){

    char name;
    
    while(strlen(name) == 0){
        
        printf("\nwhat's your name?");
        
        if(strlen(name) == 0){
            printf("\nwhat's your fking name?");
            fgets(name, 25, stdin);
            name[strlen(name) - 1] = '\0';
        }
        else{
            printf("you're %s", name);
        }
        break;
    }
    
   
    // fgets(name, 25, stdin);
    // name[strlen(name) - 1] = '\0';

    // while(strlen(name) == 0){
    //     printf("name please: ");
    //     fgets(name, 25, stdin);
    //     name[strlen(name) - 1] = '\0';
    // }
    
    // printf("hello %s", name);

    // return 0;
}
    
*/

int main2(){

    for(int i = 1; i <= 10; i+=4){
        printf("\n%d", i);
    }
}


/* 1
void hello(char[], int);

int main(){

    char name[] = "Guy";
    int age = 38;

    hello(name, age);

    return 0;
}

void hello(char name[], int age){

    printf("\nyou're %s", name);
    printf("\n%d YO", age);
}
*/