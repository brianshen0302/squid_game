#include<stdio.h>
#include<string.h>
#include<stdlib.h>



/*
typedef struct
{
    char flightName[50];
    int flightNo;
}flight;
int getflightNo(flight F){
    printf("flight NO: %d\n",F.flightNo);
}
int getflightName(flight *F){
    printf("flight Name: %s\n",F->flightName);
}
int main(){
    flight EK367 = {"EK367", 486};
    flight *p = &EK367;
    getflightName(p);
    getflightNo(EK367);
}
*/

int main7()
{
    int size = 5;
    int *arr1 = (int*) malloc(sizeof(int)*size);
    printf("%10d (%p)\n", *arr1, &arr1);
    for(int i = 0; i<size; i++)
    {
        arr1[i] = i+10;
        printf("%5d | %10d | %p\n", i, arr1[i], &arr1[i]);
    }
    printf("%10d (%p)\n", *arr1, &arr1);

    int *arr2 = realloc(arr1,sizeof(int)*size*2);
    printf("%10d (%p)\n", *arr1, &arr1);
    for(int i = 0; i<size*2; i++)
    {
        printf("%5d | %10d | %p\n", i, arr2[i], &arr2[i]);
    }
    printf("%10d (%p)\n", arr1[0], &arr1[0]);
    printf("%10d (%p)\n", arr1[2], &arr1[2]);

    free(arr2);
    printf("%10d (%p)\n", arr1[0], &arr1[0]);
    printf("%10d (%p)\n", arr1[2], &arr1[2]);
}

int main6()
{
    int size = 5;
    int *p = (int*)malloc(sizeof(int)*size);
    printf("%10d (%p)\n", *p, &p);
    printf("index |    value   | memory location\n");
    for(int i = 0; i<size; i++)
    {
        // p[i] = i+10;
        memset(p[i], '0', 10);
        printf("%5d | %10d | %p\n", i, p[i], &p[i]);
    }
    printf("%10d (%p)\n", *p, &p);
}

int main5()
{
    char s[50];
    strcpy(s,"do you want to build a snaw man?");
    printf("%s\n", s);

    memset(s, '*', 10);
    printf("%s\n", s);
}

int main4()
{
    char str1[5] = "hello";
    char str2[6] = "hello";
    char str3[50] = "hello";
    char str4[50] = "";
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    printf("str3 = %s\n", str3);
    printf("str4 = %s\n", str4);
}

int main3()
{
    int a[20] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    FILE *bin = fopen("text.sav", "rb");
    for(int i = 0; i<sizeof(a)/sizeof(a[0]); i++)
    {
        fread(&a[i], sizeof(a[i]), 1, bin);
    }
    fclose(bin);
    for(int i = 0; i<sizeof(a)/sizeof(a[0]); i++)
    {
        printf("%d\t", a[i]);
        if((i + 1) % 5 == 0) putchar('\n');
    }
}

int main2()
{
    int a[20] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    FILE *bin = fopen("text 9-3.sav", "wb");
    for(int i = 0; i<sizeof(a)/sizeof(a[0]); i++)
    {
        fwrite(&a[i], sizeof(a[i]), 1, bin);
    }
    fclose(bin);
}

int main1()
{
    int a[20] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    FILE *text = fopen("text 9-3.txt", "w");
    for(int i = 0; i<sizeof(a)/sizeof(a[0]); i++)
    {
        fprintf(text, "%d\t", a[i]);
    }
    fclose(text);
}

/*
void my_max(int a[], int s, int **ptrmax)
{
    *ptrmax = a;
    for(int i=0; i<s; i++)
    {
        if(a[i]>**ptrmax)
        {
            *ptrmax = &a[i];
        }
    }
}

int main()
{
    printf("find max in an array.\n");
    int arr[5] = {43, 324, 464, 93, 187};
    int size = 5, *max;
    my_max(arr, size, &max);
    printf("max:%d\n", *max);
}*/