/* 14.11 */
#include <stdio.h>
#include <math.h>

void transform(double source[], double target[], int n, double (*func)(double));
double square(double x);
double cube(double x);

int main(void)
{
    double source[100];
    double target[100];

    for (int i = 0; i < 100; i++) {
        source[i] = i * 0.1;
    }
    transform(source, target, 100, sin);
    printf("Using sin function:\n");
    for (int i = 0; i < 100; i++) {
        printf("%f\t%f\n", source[i], target[i]);
    }
    transform(source, target, 100, cos);
    printf("Using cos function:\n");
    for (int i = 0; i < 100; i++) {
        printf("%f\t%f\n", source[i], target[i]);
    }
    transform(source, target, 100, square);
    printf("Using square function:\n");
    for (int i = 0; i < 100; i++) {
        printf("%f\t%f\n", source[i], target[i]);
    }
    transform(source, target, 100, cube);
    printf("Using cube function:\n");
    for (int i = 0; i < 100; i++) {
        printf("%f\t%f\n", source[i], target[i]);
    }
    return 0;
}
void transform(double source[], double target[], int n, double (*func)(double))
{
    for (int i = 0; i < n; i++) {
        target[i] = func(source[i]);
    }
}
double square(double x)
{
    return x * x;
}
double cube(double x)
{
    return x * x * x;
}