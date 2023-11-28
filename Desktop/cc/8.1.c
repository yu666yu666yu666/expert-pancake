/* 8.1 */
#include <stdio.h>
#include <stdlib.h>

int main (int argc,char*argv [])
{
    int ch;
    FILE *fp;
    int count =0;
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
        count++;
   }
   printf("文件%s的字符数: %d\\n",argv[1],count);
   fclose(fp);
   return 0;
}