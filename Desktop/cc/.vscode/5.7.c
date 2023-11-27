/* 5.11.7 */
#include <stdio.h>
#include <stdlib.h>
void func(double x);

int main()
{
    double x;
    printf("Please input a number: ");
    scanf("%lf", &x);
    func(x);
    return 0;
}
void func(double x)
{
    printf("%lf\n", x * x * x);
}
