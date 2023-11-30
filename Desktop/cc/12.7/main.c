#include <stdio.h>
#include <stdlib.h>   
#include <time.h>     
#include "diceroll.h"

int main(void)
{
    int dice, roll;
    int sides;
    int set;

    srand((unsigned int)time(0)); 
    printf("Enter the number of sets; enter q to stop :");
    if (scanf("%d", &set) != 1)
    {
        return 0;
    }
    printf("How many sides and how many dice?");
    while (scanf("%d %d", &sides, &dice) == 2 && sides > 0 && dice > 0)
    {
        printf("Here are %d sets of 3 6-sided throws.\n", set);
        for (int i = 0; i < set; ++i)
        {
            roll = roll_n_dice(dice, sides);
            printf("%d ", roll);
        }
        putchar('\n');
    }
    printf("The rollem() function was called %d times.\n", roll_count); 
    printf("GOOD FORTUNE TO YOU!\n");
    system("pause");
    return 0;
}
