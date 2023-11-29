/* 12.4 */
#include <stdio.h>
#include <stdlib.h>

void func();
int main(void)
{
    int n = 0;
    puts("Please put a number.");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        func();
    }
    system("pause");
    return 0;
}
void func()
{
    static int num = 0;
    printf("this function has ran %d times.\n", ++num);
}

