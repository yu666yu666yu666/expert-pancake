/* 11.5 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRLEN 100
char *my_index(char *, char, int);
int main(void)
{
    char str[STRLEN];
    char ch;
    char *ch_index;
    int leng;

    printf("Enter the string: ");
    gets(str);
    printf("Enter the character: ");
    scanf("%c", &ch);
    leng=strlen(str);
    ch_index = my_index(str, ch,leng);
    if (ch_index != NULL)
        printf("I found it! %c is in %p.\n", *ch_index, ch_index);
    else
        printf("%c doesn't exist in the string.\n", ch);
    system("pause");
    return 0;
}
char *my_index(char *str, char c,int leng)
{
    int i=0;
    while (i<leng)
    {
        if (*str == c)
            return str;
        else
            str++;
            i++;
    }
    return NULL;
}
