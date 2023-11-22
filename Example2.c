#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **array = calloc(3, sizeof(int *));

    // Kullanıcıdan array bilgilerini al.
    for (int i = 0; i < 3; i++)
    {
        array[i] = calloc(3, sizeof(int));
        for (int j = 0; j < 3; j++)
        {
            printf("Please enter your matrix elements :");
            scanf("%d", &array[i][j]);
        }
    }

    // Arrayi yazdır
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    // Arrayin transposunu al
    int **transposeArray = calloc(3, sizeof(int *));
    for (int i = 0; i < 3; i++)
    {
        transposeArray[i] = calloc(3, sizeof(int));
        for (int j = 0; j < 3; j++)
        {
            transposeArray[i][j] = array[j][i];
        }
    }

    printf("\n");
    // Arrayi yazdır
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", transposeArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}