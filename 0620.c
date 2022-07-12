#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


int main5()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;

    srand(time(0));

    answer = (rand() % MAX) + MIN;

    do{
        printf("enter a guess: ");
        scanf("%d", &guess);
        if(guess > answer) printf("too high\n");
        else if (guess < answer) printf("too low");
        else printf("correct");

        guesses++;
    }while(guess != answer);
    
    printf("\nyou've guessed %d times", guesses);
}

int main()
{
    srand(time(0));

    int number1 = (rand() % 10) + 1;
    int number2 = (rand() % 10) + 1;
    int number3 = (rand() % 10) + 1;

    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d", number3);

    return 0;
}

/* 3
enum day{sun = 1, mon = 2, tue = 3, wen = 4, thu = 5, fri = 6, sat = 7};

int main()
{
    enum day today = sat;

    printf("%d", today);

    if(today == sun || today == sat) printf("\nits weekend. nice");
    else printf("\ngotta work...");
}
*/

/* 2
typedef struct
{
    char name[12];
    float gpa;
}student;
int main()
{
    student student1 = {"Naruto", 2.6};
    student student2 = {"Ryuko", 4.3};
    student student3 = {"Sakamoto", 4.0};
    student student4 = {"Zio", 3.2};
    student students[] = {student1, student2, student3, student4};

    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        printf("%-12s", students[i].name);
        printf("%.2f\n", students[i].gpa);
    }
}
*/

/* 1
typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;

int main()
{

    User user1 = {"oaskdp", "edpqw1230", 56165524};
    User user2 = {"eujnwo", "wqedqd", 16554343};

    printf("%s\n", user1.name);
    printf("password: %s\n", user1.password);
    printf("ID: %d\n", user1.id);
    printf("%s\n", user2.name);
    printf("password: %s\n", user2.password);
    printf("ID: %d\n", user2.id);    
}
*/