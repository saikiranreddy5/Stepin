#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct BookManager
{
  char BookName[30];
  char Author[30];
  int Pages;
  float Cost;
};

int main()
{
  struct BookManager l[100];
  char authorname[30], bookname[30];
  int i, j, count;
  i = j = count = 0;

  while (j != 6)
  {
    printf("\n\n1. Add information about a New book\n2. Details of Book\n");
    printf("3. Author Wiki\n");
    printf("4. Title of specified book - List\n");
    printf("5. No. of books in Bookstore\n");
    printf("6. Exit");

    printf("\n\nEnter one of the above : ");
    scanf("%d", &j);

    switch (j)
    {
    /* Add book */
    case 1:

      printf("Enter the book name = ");
      scanf("%s", l[i].BookName);

      printf("\n\nEnter the author name = ");
      scanf("%s", l[i].Author);

      printf("\nEnter the number of pages = ");
      scanf("%d", &l[i].Pages);

      printf("\nEnter the price of book = ");
      scanf("%f", &l[i].Cost);
      count++;

      break;
    case 2:
      printf("you have entered the following information\n");
      for (i = 0; i < count; i++)
      {
        printf("Book Name = %s", l[i].BookName);

        printf("\t Author Name = %s", l[i].Author);

        printf("\t  Pages = %d", l[i].Pages);

        printf("\t  Price = %f", l[i].Cost);
      }
      break;

    case 3:
      printf("Enter the Author's name : ");
      scanf("%s", authorname);
      for (i = 0; i < count; i++)
      {
        if (strcmp(authorname, l[i].Author) == 0)
          printf("%s %s %d %f", l[i].BookName, l[i].Author, l[i].Pages, l[i].Cost);
      }
      break;

    case 4:
      printf("Enter the book's name : ");
      scanf("%s", bookname);
      for (i = 0; i < count; i++)
      {
        if (strcmp(bookname, l[i].BookName) == 0)
          printf("%s \t %s \t %d \t %f", l[i].BookName, l[i].Author, l[i].Pages, l[i].Cost);
      }
      break;

    case 5:
      printf("\n Total number of books in Store : %d", count);
      break;
    case 6:
      exit(0);
    }
  }
  return 0;
}

