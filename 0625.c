#include<stdio.h>



/*
void func(int A[3][2][2])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            for(int k = 0; k < 2; k++)
            {
                printf("%d", *(A[i][j]+k));
            }
        printf("\n");
        }
    }
}

int main()
{
    int c[3][2][2] = {{{2,5},{9,6}},{{8,4},{3,5}},{{2,4},{9,3}}};
    func(c);
}
*/

int main()
{
    int A[] = {2, 4, 8, 16, 32};
    int *p = A;

    for(int i = 0; i < 5; i++)
    {
        printf("address = %d\n", &A[i]);
        printf("address = %d\n", A+i);
        printf("value = %d\n", A[i]);
        printf("value = %d\n", *(A+i));

        printf("address = %d\n", p);
        printf("address = %d\n", p+i);
        printf("value = %d\n", *(p+i));
        printf("value = %d\n", p[i]);
        
    }

}