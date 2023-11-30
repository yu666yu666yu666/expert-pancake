/* 13.2  */
#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 4096

int main (int argc,char*argv [])
{
    FILE*fp,*fw;
    if(argc!=3)
    {
        exit(EXIT_FAILURE);
    }
   if( (fp=fopen(argv[1],"r"))==NULL)
   {
        exit(EXIT_FAILURE);
   }
    fw=fopen(argv[2],"w");
   
   char buffer[BUFFER_SIZE];
   size_t bytesRead;
   
   while((bytesRead=fread(buffer,1,BUFFER_SIZE,fp))>0)
   fwrite(buffer,1,bytesRead,fw);
   fclose(fp);
   fclose(fw);
   return 0;
}