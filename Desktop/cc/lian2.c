#include<stdio.h>
int main()
{
     int x, j = 1,s;
    int n = 1;
    scanf("%d", &x);
    while (j < x)
    {
        j = j * 10 + 1;
        n++;
    }
    while (1)
    {
        s=j/x;
        printf("%d", s);
        if (j % x == 0)
            break;
        j = j% x * 10 + 1;
        n++;
    }
    printf(" %d", n);
    return 0;
}