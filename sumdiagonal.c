#include <stdio.h>

int main()
{
    int a[3][3], i, j, num, sum = 0;

    // input elements in matrix
    printf("Enter elements of matrix :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // print matrix
    printf("Matrix Elements : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    // diagonal elements sum code
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if(i == j || i + j == 2)
            {
                sum = sum + a[i][j]; //2
            }
        }
    }

    printf("The Sum Of diagonal elements of matrix is : %d", sum);

    return 0;
}