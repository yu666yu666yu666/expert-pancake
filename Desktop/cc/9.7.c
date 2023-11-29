/* 9.7 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int char_to_index(char);
int main(void)
{
    FILE *fp;
    char fname[50];
    char ch;

    printf("Enter the file name: ");
    scanf("%s", fname);
    fp = fopen(fname, "r"); 
    if (fp == NULL)
    {
        printf("Failed to open file.\n");
        exit(1); 
    }
    while ((ch = getc(fp)) != EOF)
    {
        int index;
        if ((index = char_to_index(ch)) > 0)
            printf("%c is a alpha, it's index is %d.\n", ch, index);
    }
    fclose(fp); 

    system("pause");
    return 0;
}
int char_to_index(char ch)
{
    if (isalpha(ch))
    {
        if (isupper(ch))
            return ch - 'A' + 1;
        else
            return ch - 'a' + 1;
    }
    else
        return -1;
}
