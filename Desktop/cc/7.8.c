/* 7.8 */
#include <stdio.h>
#include <stdlib.h>

#define PAY_RATE1 8.75
#define PAY_RATE2 9.33
#define PAY_RATE3 10.00
#define PAY_RATE4 11.20
#define TIME_BASE 40
#define OVERTIME 1.5
#define BREAK1 300
#define BREAK2 450
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25

int main(void)
{
int choise;
double pay_rate;
double hours;
double sum, tax, net;

printf("*****************************************************************\n");
printf("Enter the number corresponding to the desired pay rate or action:\n");
printf("1) $8.75/hr           2) $9.33/hr\n");
printf("3) $10.00/hr           4) $11.20/hr\n");
printf("5) quit\n");
printf("*****************************************************************\n");

while (scanf("%d", &choise)&&choise<=5 )
{
switch (choise)
{
case 1:
pay_rate = PAY_RATE1;
break;
case 2:
pay_rate = PAY_RATE2;
break;
case 3:
pay_rate = PAY_RATE3;
break;
case 4:
pay_rate = PAY_RATE4;
break;
case 5:
printf("Bye!\n");
break;
default:
printf("\nPlease enter the right number!\n");
printf("*****************************************************************\n");
printf("Enter the number corresponding to the desired pay rate or action:\n");
printf("1) $8.75/hr           2) $9.33/hr\n");
printf("3) $10.00/hr            4) $11.20/hr\n");
printf("5) quit\n");
printf("****************************************************************\n");
}

if ( choise != 5)
{
printf("Enter your work hours in a week: ");
scanf("%lf", &hours);
if (hours > TIME_BASE)
hours = TIME_BASE + (hours - TIME_BASE) * OVERTIME;
sum = hours * pay_rate;
if (sum < BREAK1)
tax = sum * RATE1;
else if (sum < BREAK2)
tax = BREAK1 * RATE1 + (sum - BREAK1) * RATE2;
else
tax = BREAK1 * RATE1 + (BREAK2 - BREAK1) * RATE2 + (sum - BREAK2) * RATE3;
net = sum - tax;
printf("sum: %.2lf, tax: %.2lf, net: %.2lf\n", sum, tax, net);
}
}
return 0;
}