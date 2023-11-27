/* 6.4  */
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char a='A';
    int m=0;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            printf("%c",a+m);
            m++;
        }
        printf("\n");
    }
    return 0;
}