/* 17.1 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TSIZE 45

struct film
{
    char title[TSIZE];
    int rating;
    struct film *next;
    struct film *pre;
};

void positive(struct film *p);  
void reversed(struct film *p);  
void recursion(struct film *p); 

int main()
{
    struct film *head = NULL; 
    struct film *current;    
    struct film *prev;        
    char input[TSIZE];

    puts("Enter first movie title: ");
    while (gets(input) != NULL && input[0] != '\0')
    {
        if ((current = (struct film *)malloc(sizeof(struct film))) == NULL)
        {
            printf("Failed to malloc memory\n");
            exit(EXIT_FAILURE);
        }
        if (head == NULL)
        {
            head = current;
            current->pre = NULL;
        }
        else
        {
            prev->next = current;
            current->pre = prev;
        }
        current->next = NULL;
        strcpy(current->title, input);
        puts("Enter your rating <0-10>: ");
        scanf("%d", &current->rating);
        while (getchar() != '\n')
            continue;
        puts("Enter next movie title (empty line to stop): ");
        prev = current;
    }
    if (head == NULL)
        printf("No data entered. ");
    else
    {
        printf("Here is the movie list: \n");
        positive(head);
        printf("\n");
        printf("Here is the movie list: \n");
        reversed(prev);
        printf("\n");
        printf("Here is the movie list: \n");
        recursion(head);
    }
    printf("Bye!\n");
    system("pause");
    return 0;
}

void positive(struct film *p)
{
    while (p != NULL)
    {
        printf("Movie: %s Rating: %d\n", p->title, p->rating);
        p = p->next;
    }
}

void reversed(struct film *p)
{
    while (p != NULL)
    {
        printf("Movie: %s Rating: %d\n", p->title, p->rating);
        p = p->pre;
    }
}

void recursion(struct film *p)
{
    if (p->next != NULL)
        recursion(p->next);
    printf("Movie: %s Rating: %d\n", p->title, p->rating);
}
