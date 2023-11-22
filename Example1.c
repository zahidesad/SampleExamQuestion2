#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr1[] = {1,2,3,4,5};
    int *p = calloc(5,sizeof(int));

    for (int i = 0; i < 5; i++) {
        p[i] = arr1[i];
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p+i));
    }

            
    return 0;
}