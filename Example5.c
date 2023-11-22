#include <stdio.h>
#include <stdlib.h>

typedef struct Book
{
    char *title;
    char *author;
    int price;
} Book;

int main()
{
    Book b1 = {.title = "A", .author = "Emirhan", .price = 100};
    Book b2 = {.title = "B", .author = "Emirhan", .price = 200};
    Book b3 = {.title = "C", .author = "Emirhan", .price = 300};

    Book books[] = {b1, b2, b3};
                                                                    
    int max = books[0].price;
    int maxIndex = 0;
    for (int i = 0; i < 3; i++)
    {
        if (max < books[i].price)
        {
            max = books[i].price;
            maxIndex = i;
        }
    }
    printf("Title of the highest price's book : %s\n", books[maxIndex].title);
    printf("Author of the highest price's book : %s\n", books[maxIndex].author);
    printf("Price of the highest price's book : %d\n", books[maxIndex].price);

    return 0;
}