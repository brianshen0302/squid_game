#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int rand_bet(int range){
    time_t t;
    srand((unsigned)time(&t));
    int x = rand() % range;
    while(x == 0) {
        x = rand() % range;
    }
    printf("+ Computer bet: %d         +\n", x);
    return x;
}

int rand_guess(){
    time_t t;
    srand((unsigned)time(&t));
    int x = rand() % 2;
    printf("+ computer guess: %d       +\n", x);
    return x;
}

int bet_check(int own){
    int bet = own + 1;

    while(bet > own || bet <= 0){
        printf("+ Enter your bet          +\n");
        scanf("%d", &bet);
    }
    printf("+ You bet %d               +\n", bet);
    return bet;
}

int OE_check(){
    int guess = 2;
    while(guess != 0 && guess != 1){
        printf("+ Guess odd(1) or even(0) +\n");
        scanf("%d", &guess);
    }
    return guess;
}

int guess_check(int oppBet, int userGuess){
    if(oppBet % 2 == userGuess) return 1;
    else return 0;
}

// int round_winner(int up, int cp){
//     if(up > cp){
//         return 1;
//     }
//     else if(up < cp){
//         return 2;
//     }
//     else return 0;
// }

int round_result(int cbet, int ubet, int cguess, int uguess){
    printf("+ cBet: %d - uBet: %d       +\n", cbet, ubet);
    printf("+ cGuess: %d - uGuess: %d   +\n", cguess, uguess);
}

int check_winner(int mComputer, int mUser){
    if(mComputer <= 0){
        printf("+ You win!                +");
        return 1;
    }
    else if(mUser <= 0){
        printf("+ You lose.               +");
        return 0;
    }
    else return 2;
    // else{
    //     int y = 0;
    //     return y; 
    // }
}



// typedef struct{
//     int Mown;
//     int Mbet;
//     int Mguess;
// }player;

int main(){
    
    int winner = 2;
    int userm = 10;
    int computerm = 10;
    int bet, guess, upoint, cbet, cguess, cpoint;

    while(winner == 2){

        printf("+==START==================+\n");
        printf("+-------------------------+\n");
        printf("+ Computer: %d; user: %d  +\n", computerm, userm);
        printf("+-------------------------+\n");
        cbet = rand_bet(computerm);
        printf("+-------------------------+\n");
        bet = bet_check(userm);
        printf("+-------------------------+\n");
        cguess = rand_guess();        
        printf("+-------------------------+\n");
        printf("+-------------------------+\n");
        guess = OE_check();
        upoint = guess_check(cbet, guess);
        cpoint = guess_check(bet, cguess);
        if(upoint > cpoint){
            userm += bet;
            computerm -= bet;
        }       
        else if(upoint < cpoint){
            userm -= cbet;
            computerm += cbet;
        }
        round_result(cbet, bet, cguess, guess);
        printf("+-------------------------+\n");
        printf("+ Computer: %d; User: %d  +\n", computerm, userm);
        

        
        winner = check_winner(computerm, userm);
    }
}