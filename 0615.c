#include <stdio.h>
#include <math.h>
#include <ctype.h>

int findmax(int x , int y){
    return (x > y) ? x : y;
}

int main(){
    int max = findmax(5, 3);

    printf("%d", max);

    return 0;
}

// double square(double x){
//     return x * x;
// }

// int main7(){
//     double x = square(3.14);
//     printf("%lf", x);

//     return 0;
// }

// void BD (char x[] , int y){

//     printf("\nHBD dear %s", x);
//     printf("\nyou're %d yo", y);
// }

int main6(){

    char name[] = "Lil";
    int age = 13;

}

int main5(){

    char operator;
    float num1;
    float num2;
    float result;

    printf("\nenter the operator (+ - * /): ");
    scanf("%c", &operator);

    printf("enter number 1: ");
    scanf("%f", &num1);
    
    printf("enter number 2: ");
    scanf("%f", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("the rsult is: %.1lf ", result);
            break;
        case '-':
            result = num1 - num2;
            printf("the rsult is: %.1lf ", result);
            break;
        case '*':
            result = num1 * num2;
            printf("the rsult is: %.1lf ", result);
            break;
        case '/':
            result = num1 / num2;
            printf("the rsult is: %.1lf ", result);
            break;
        default:
            printf("%c is not valid", operator);
    }

}

int main4(){

    char unit;
    float temp;

    printf("\nIs the temprature in (C) or (F)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("\nenter the temputure in celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temperature is %.1f F", temp);
    }
    else if(unit == 'F'){
        printf("\nenter the temputure in farenheit: ");
        scanf("%f", &temp);
        temp = (temp -32) * 5 / 9;
        printf("\nThe temperature is %.1f C", temp);
    }
    else{
        printf("\n %c is not a valid unit of measurement", unit);
    }
}

int main3(){

    char grade;

    printf("please enter your grade:");
    scanf("%c", &grade);
    
    switch(grade){
        case 'A':
            printf("perfet\n");
            break;
        case 'B':
            printf("good job\n");
            break;
        case 'C':
            printf("you're ok\n");
            break;
        case 'D':
            printf("not f lol\n");
            break;
        case 'F':
            printf(" failed\n");
            break;
        default:
            printf("please enter valid grades.");
            break;
    }
    
    return 0;
}

int main2(){

    int age;

    printf("How old are you?");
    scanf("%d", &age);

    if (age >= 18){
        printf("you're now signed up!");
    }
    else if(age <0 ){
        printf("you haven't born yet.");
    }
    else{
        printf("you are too young to sign up.");
    }

    


}

int main1(){

    double A;
    double B;
    double C;

    printf("enter side A");
    scanf("%lf", &A);
    
    printf("enter side B");
    scanf("%lf", &B);
    
    C = sqrt(A*A + B*B);

    printf("side C = %lf", C);

    return 0;

}