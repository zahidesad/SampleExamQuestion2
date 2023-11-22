#include <stdio.h>

#define PRINT_MESSAGE(message) \
    { \
        printf("Message: %s\n", message); \
        printf("File: %s\n", __FILE__); \
        printf("Line: %d\n", __LINE__); \
    } 

int main() {
   PRINT_MESSAGE("MESSAGE INFO");         
            
    return 0;
}