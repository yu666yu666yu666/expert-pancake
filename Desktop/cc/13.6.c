/* 13.6 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40

int main ()
{
    FILE *in,*out;
    int ch;
    char name [LEN],name1 [LEN];
    int count =0;
    printf("Please input the filename: ");
    gets(name);
    if ((in = fopen(name, "r")) == NULL)
    {
        printf("Can't open %s\n", name);
        exit(EXIT_FAILURE);
    }
    strncpy(name1,name,LEN-5);
    name1[LEN-5]='\0';
    strcat(name1,".red");
    out=fopen(name1,"w");
    while((ch=getc(in))!=EOF)
    if(count++%3==0)
    putc(ch,out);
    fclose(in);
    fclose(out);
    system("pause");
    return 0;
}
