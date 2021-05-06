#include <stdio.h>
#include <conio.h>

struct library
{
    char book_name[30];   //done
    char author_name[30]; //done
    int num_page;         //done
    long int ISBN_code;   //done
    char genres[20];      //done
    int year_pub;         //done
    int book_num;         //done
    int rough;

};
void librarian_input();

int main()
{
    
    int num_books, j;


    printf("Enter the number of books: ");
    scanf("%d", &num_books);
    
    int n = num_books;

    struct library books[n];
    
    for (j = 0; j < num_books; j++)
    {

        printf("\nEnter the book's name: ");
        scanf("%s", books[n].book_name);

        printf("\n\nEnter the book's author's name: ");
        gets(books[n].author_name);

        printf("\n\nEnter the number of pages: ");
        scanf("%d", &books[n].num_page);

        printf("\n\nEnter the book's Year of Publication: ");
        scanf("%d", &books[n].year_pub);

        printf("\n\nEnter the books ISBN Code: ");
        scanf("%ld", &books[n].ISBN_code);

        printf("\n\nEnter the book's genre: ");
        gets(books[n].genres);

        printf("enter rough");
        scanf("%d", &books[n].rough);
    }
    return 0;
}