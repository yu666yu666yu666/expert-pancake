/* 12.5 */
#include <stdio.h>
#include <stdlib.h>

int cmp__(const void *a, const void *b);

int main()
{
    int value[100];

    for (int i = 0; i < 100; i++)
    {
        value[i] = rand() % 10 + 1;
    }
    qsort(value, 100, sizeof(int), cmp__);
    for (int i = 0; i < 100; i++)
    {
        printf("%d ", value[i]);
    }
    system("pause");
    return 0;
}
int cmp__(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}
