#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>

/* 4
char board[3][3];
const char player = 'X';
const char computer = 'O';

void resetboard();
void printboard();
int checkfreespaces();
void playermove();
void computermove();
char checkwinner();
void printwinner(char);

int main()
{
    char winner = ' ';
    char response;

    do
    {
        winner = ' ';
        response = ' ';
        resetboard();

        while (winner == ' ' && checkfreespaces() != 0)
        {
            printboard();
    
            playermove();
            winner = checkwinner();
            if(winner != ' ' || checkfreespaces == 0) break;
        
            computermove();
            winner = checkwinner();
            if(winner != ' ' || checkfreespaces == 0) break;
        }
    
        printboard();
        printwinner(winner);

        printf("again? Y/N: ");
        scanf(" %c", &response);
        response = toupper(response);

    }while(response == 'Y');


    return 0;
}

void resetboard()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void printboard()
{
    printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}
int checkfreespaces()
{
    int freespace = 9;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j <3 ; j++)
        {
            if(board[i][j] != ' ') freespace--;
        }
    }
    return freespace;
}
void playermove()
{
    int x;
    int y;

    do{
        printf("Enter row(1-3):");
        scanf("%d", &x);
        x--;
        printf("Enter column(1-3):");
        scanf("%d", &y);
        y--;

        if(board[x][y] != ' ')
        {
            printf("invalid move\n");
        }
        else
        {
            board[x][y] = player;
            break;
        }
    }while(board[x][y] != ' ');
}
void computermove()
{
    srand(time(0));
    int x;
    int y;

    if(checkfreespaces() > 0)
    {
        do 
        {
            x = rand() % 3;
            y = rand() % 3;            
        } while(board[x][y] != ' ');

        board[x][y] = computer;
    }

    else
    {
        printwinner(' ');
    }
}
char checkwinner()
{
    for(int i = 0; i < 3; i++)
    {
        if(board[0][i] == board[1][i] && board[0][i] ==board[2][i]) return board[0][i];
        if(board[i][0] == board[i][1] && board[i][0] ==board[i][2]) return board[i][0];
    }
   
    if(board[0][0] == board[1][1] && board[0][0] ==board[2][2]) return board[0][0];
    if(board[0][2] == board[1][1] && board[0][0] ==board[2][0]) return board[0][2];

    return ' ';
}
void printwinner(char winner)
{
    if(winner == player) printf("you win\n");
    else if(winner == computer) printf("you lose\n");
    else printf("it's a tie\n");
}

*/

int main3()
{
    // FILE *pF = fopen("test.txt", "w");

    // fprintf(pF, "you died\n");

    // fclose(pF);

    if(remove("test.txt") == 0)
    {
        printf("deleted successfully");
    }
    else
    {
        printf("it's still there");
    }
    return 0;
}

/* 2
void printage(int *pAge)
{
    printf("you're %d yo", *pAge);
}

int main()
{
    int age = 21;
    int *pAge = NULL;
    pAge = &age;

    printf("age: %d \n", age);
    printf("page: %d \n", *pAge);

    printf("age address: %p\n", &age);
    printf("page address: %p\n", pAge);
    
    printf("age: %d bytes", sizeof(age));
    printf("age: %d bytes", sizeof(pAge));

    printage(pAge);

    return 0;
}
*/

int main1()
{
    char a;
    double b;
    short c;
    int d;

    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(b));
    printf("%d\n", sizeof(c));
    printf("%d\n", sizeof(d));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    printf("%p\n", &d);
}