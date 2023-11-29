/* 12.8 */
int *make_array(int elem, int val)
{
    int *p = (int *)malloc(elem * sizeof(int));
    for (int i = 0; i < elem; i++)
    {
        p[i] = val;
    }
    return p;
}

void show_array(const int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
        if ((i + 1) % 8 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
}
