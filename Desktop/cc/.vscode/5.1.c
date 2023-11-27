#include<stdio.h>
#include<stdlib.h>
#define shi 60

int main(void) {
    int min,h;
    puts("Please input your minutes: ");
    while(scanf("%d",&min)==1)
    {
       h=min/shi;
     min=min%shi;
        printf("hour:%d,min:%d",h,min);
    }
     puts("Bye!");
return 0;
}
