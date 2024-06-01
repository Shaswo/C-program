#include <stdio.h>
#include <string.h>
int main()
{
    struct book
    {
        char name[50];
        int noOfPages;
        float price;
    } a, b, c; // Name of books a

    a.noOfPages = 200;
    a.price = 300.3;
    strcpy(a.name, "Mocking Birds");

    b.price = 200.9;
    b.noOfPages = 200;
    strcpy(b.name, "Albert");

    printf("Name of 1st book is %s , its price :%f, its pages are :%d", a.name, a.price,a.noOfPages);

    return 0;
} 