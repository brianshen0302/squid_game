#include<stdio.h>
#include<ctype.h>

int main()
{
    int x = 8;  //00001001
    int y = 13; //00001101
    int z = 0;  //00000000

    printf("%d\n", x & y);

    printf("%d\n", x | y);

    printf("%d\n", x ^ y);

    printf("%d\n", x >> 1);
    
    printf("%d\n", x << 1);
}

int main1()
{
    char quest[][100] = {"1. 600/2=?", "2. 2^10=?", "3. the color of apple is?"};

    char options[][100] = {"A. 300", "B. 600", "C. 1200", 
                           "A. 2048", "B. 1024", "C. 512",
                           "A. pink" ,"B. orange", "C. red"};

    char ans[3] = {'A', 'B', 'C'};
    int numOfQ = sizeof(quest)/sizeof(quest[0]);

    char guess;
    int score;

    printf("Quizz game\n");

    for(int i = 0; i < numOfQ; i++)
    {
        printf("***************\n");
        printf("%s\n", quest[i]);
        printf("***************\n");

        for(int j = (i * 3); j < (i * 3) + 3; j++)
        {
            printf("%s\n", options[j]);
        }
        
        printf("Ans:");
        scanf(" %c", &guess);
        //scanf("%c");

        guess = toupper(guess);
        
        if(guess == ans[i])
        {
            printf("correct!\n");
            score++;
        }
        
        else
        {
            printf("wrong");
        }
    }

    printf("score: %d/%d", score, numOfQ);
}