#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int guess = 50;
int gmax = 100, gmin = 1; 
char response;

puts("Pick an integer from 1 to 100. I will try to guess it.");
puts("Respond with a y if my guess is right, with a l if it's big and with an u if it's small.");
printf("Uh...is your number %d?\n", guess);
while ((response = getchar()) != 'y')
{
if (response == 'l')
{
gmax = guess;
guess = (gmin + gmax) / 2;
printf("Well, then, is it %d?\n", guess);
}
else if (response == 'u')
{
gmin = guess;
guess = (gmin + gmax) / 2;
printf("Well, then, is it %d?\n", guess);
}
else
{
printf("Sorry, I understand only l, u or y.\n");
}
while (getchar() != '\n')
continue;
}
printf("I knew I could do it!\n");
return 0;
}