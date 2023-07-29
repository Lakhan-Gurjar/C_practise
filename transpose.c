#include <stdio.h>

int main()
{
    int matrix[2][2], i, j, trans[2][2];
    printf("Enter Matrix Elements : ");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix Elements :\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

     for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            trans[j][i] = matrix[i][j];
        }
    }

    printf("Transpose Elements :\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}