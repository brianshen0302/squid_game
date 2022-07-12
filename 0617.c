#include<stdio.h>
#include<string.h>



int main4()
{
    struct player
    {
        char name[12];
        int score;
    };

    struct player p1;
    struct player p2;

    strcpy(p1.name, "snao");
    p1.score = 34;

    strcpy(p2.name, "sojfowe");
    p2.score = 3;

    printf("%s\n", p1.name);
    printf("%d\n", p1.score);
    printf("%s\n", p2.name);
    printf("%d\n", p2.score);
}

/* 3
void sort(int array[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j <size - 1; j++){
            if(array[j] > array[j+1]){
                int temp;
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printarray(int array[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
}

int main(){
    int array[] = {6, 5, 5, 7, 1, 3};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array,size);
    printarray(array,size);
}
*/

int main3(){
    char x[15] = "sidfsad";
    char y[15] = "fqaewioiw";
    char temp[15];
    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("%s\n", x);
    printf("%s", y);
}


int main2(){
    char cars[][10] = {"sjoda","snodla","djufw"};
    strcpy(cars[1], "train");

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++){
        printf("%s\n", cars[i]);
    }
    return 0;
}

int main1(){

    //int numbers[3][3] = {{3, 9, 9}, {7, 9, 8}, {2, 7, 4}};

    int numbers[3][3];

    numbers[0][0] = 1;
    numbers[0][1] = 1;
    numbers[0][2] = 1;
    numbers[1][0] = 1;
    numbers[1][1] = 1;
    numbers[1][2] = 1;
    numbers[2][0] = 1;
    numbers[2][1] = 1;
    numbers[2][2] = 1;


    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++){
            printf("%d", numbers[i][j]);
        }
        printf("\n");
    }
    return 0;
}