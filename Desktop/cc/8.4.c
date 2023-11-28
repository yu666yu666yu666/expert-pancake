/* 8.1 */
#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

int main (int argc,char*argv [])
{
    int ch;
    FILE *fp;
    int alpha=0,word=0;
    int  IF_START_BOOL=0;
    if(argc!=2)
    {
        exit(EXIT_FAILURE);
    }
   if( (fp=fopen(argv[1],"r"))==NULL)
   {
        exit(EXIT_FAILURE);
   }
   while((ch=getc(fp))!=EOF)
   {
        putc(ch,stdout);
        if(isalpha(ch)&&IF_START_BOOL==0)
        IF_START_BOOL=1;
        else if(!isalpha(ch)&&IF_START_BOOL==1)
        {
            IF_START_BOOL=0;
            word++;
        }
        else if(isalpha(ch)&&IF_START_BOOL==1)
         alpha++;
   }
   printf("word:%d,alpha:%d",word,alpha);
   fclose(fp);
   return 0;
}