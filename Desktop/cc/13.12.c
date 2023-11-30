/* 13.12 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    FILE *fp1, *fp2;
    int number[20][30]; 
    int character[20][31]; 
    int i, j;
    char ch;
    char name[40];

    printf("Please input the filename: ");
    scanf("%s", name);
    if ((fp1 = fopen("name", "r")) == NULL)
    {
        fprintf(stderr, "Can't open file:%s\n", "name");
        exit(EXIT_FAILURE);
    }
    for (i = 0; i < 20; i++) 
        for (j = 0; j < 60; j++)
        {
            if ((ch = getc(fp1)) != EOF && isdigit(ch))
                number[i][j / 2] = (int)ch - 48;
        }
    if (fclose(fp1) != 0)
        fprintf(stderr, "Error in closing file name\n");
    for (i = 0; i < 20; i++)
        for (j = 0; j < 30; j++)
        {
            switch (number[i][j])
            {
            case 0:
                character[i][j] = ' ';
                break;
            case 1:
                character[i][j] = '.';
                break;
            case 2:
                character[i][j] = '\'';
                break;
            case 3:
                character[i][j] = ':';
                break;
            case 4:
                character[i][j] = '~';
                break;
            case 5:
                character[i][j] = '*';
                break;
            case 6:
                character[i][j] = '=';
                break;
            case 7:
                character[i][j] = '^';
                break;
            case 8:
                character[i][j] = '%';
                break;
            case 9:
                character[i][j] = '#';
                break;
            default:
                break;
            }
        }
    for (i = 0; i < 20; i++)
        character[i][30] = '\0';
    if ((fp2 = fopen("result.txt", "a+")) == NULL)
    {
        fprintf(stderr, "Can't open file:%s\n", "result.txt");
        exit(EXIT_FAILURE);
    }
    for (i = 0; i < 20; i++) 
    {
        for (j = 0; j < 31; j++)
            putc(character[i][j], fp2);
        putc('\n', fp2);
    }
    rewind(fp2);
    puts("Content output:");
    while ((ch = getc(fp2)) != EOF) 
        putc(ch, stdout);
    if (fclose(fp2) != 0)
        fprintf(stderr, "Error in closing file result.txt\n");
    system("pause");
    return 0;
}
