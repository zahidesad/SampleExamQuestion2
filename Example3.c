#include <stdio.h>
#include <stdlib.h>

int *allocateMemory(int N)
{
    int *arr = calloc (N, sizeof(int));

    for (int i = 0; i < N; i++) {
        (arr)[i] = i+1;
    }
    return arr;
}    


int main() {
    int *arr = allocateMemory(5);

    for (int i = 0; i < 5; i++) {
        printf("%d " , arr[i]);
    }            
            
    return 0;
}