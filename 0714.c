#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int bank_check(int first_digit){
    if(first_digit == 3) printf("Bank: JBC\n");
    else if(first_digit == 4) printf("Bank: VISA\n");
    else if(first_digit == 5) printf("Bank: Master Card\n");
    else printf("Incorrect starting number");

    return 0;
}

int NOcheck(){

    int check = 1;

    while(check){
        int nosum = 0, digit_count = 0;
        long long *cardno = (long long*)calloc(1, sizeof(long long));
        int *cardno_digit = (int*)malloc(sizeof(int)*16);
        printf("Enter card number\n");
        // cardno[1] = 4353135;
        scanf("%lld", &cardno[1]);
        printf("Credit card number: %lld\n", cardno[1]);
        long long temp = cardno[1];
        // printf("%lld\n", temp);
        while(temp > 0){
            cardno_digit[digit_count] = temp % 10;
            nosum += temp % 10;
            temp = temp / 10;
            digit_count += 1;
            // printf("%lld\n", temp);
        }
        printf("%d\n", nosum);
        // for(int i = 0; i<digit_count; i++){
        //     printf("%d\n", cardno_digit[i]);
        // }

        if(digit_count != 16){
            printf("length: %d. incorrect length\nPlease try again\n------------------------\n", digit_count);
            
        }
        else if(nosum % 10 != 0){
            printf("Credit card number: %lld is invalid\nPlease try again\n------------------------\n", cardno[1]);
        }
        else{
            bank_check(cardno_digit[digit_count-1]);
            printf("Credit card number: %lld is valid\n", cardno[1]);
            check = false;
        }

        free(cardno);
    }
    return 0;
}



int main(){
    NOcheck();
}


int main1()
{
    int size = 5;
    int *p = (int*)malloc(sizeof(int)*size);
    printf("%10d (%p)\n", *p, &p);
    printf("index |    value   | memory location\n");
    for(int i = 0; i<size; i++)
    {
        // p[i] = i+10;
        memset(&p[i], NULL, 10);
        printf("%5d | %10d | %p\n", i, p[i], &p[i]);
    }
    printf("%10d (%p)\n", *p, &p);
    return 0;
}