/* 7.6 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
char ch;
int count = 0; 
int t=0; 
while ((ch = getchar()) != '#')
{
if (ch == 'e')
{
t=1;
}
if (ch == 'i' && t==1)
{
count++;
t=0;
}
else if (ch != 'e')
{
t=0;
}
}
printf("ei出现了%d次\n", count);
return 0;
}