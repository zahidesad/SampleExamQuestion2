#include <stdio.h>
#include <stdlib.h>

#define POWER(base, exponent) \
    ({ \
        int result = 1; \
        for (int i = 0; i < (exponent); ++i) \
            result *= (base); \
        result; \
    })

int main() {
    printf("%d" , POWER(2 ,3 ));

            
    return 0;
}