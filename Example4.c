#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[] = "Ahmet";
    int length = strlen(string);
    int start = 0;
    int end = length - 1;

    while (start < end)
    {
        char temp = string[start];
        string[start] = string[end];
        string[end] = temp;

        start++;
        end--;
    }

    printf("%s", string);

    return 0;
}