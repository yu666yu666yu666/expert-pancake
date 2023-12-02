/* 14. 10 */
#include <stdio.h>

void func1(void)
{
    printf("You choose a.\n");
}
void func2(void)
{
    printf("You choose b.\n");
}
void func3(void)
{
    printf("You choose c.\n");
}
void func4(void)
{
    printf("You choose d.\n");
}

int main(void)
{
    void (*funcs[4])(void) = {func1, func2, func3, func4};
    char choice;
    while (1) {
        printf("Choose from the following options:\n");
        printf("a. Option 1\n");
        printf("b. Option 2\n");
        printf("c. Option 3\n");
        printf("d. Option 4\n");
        printf("q. Quit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);
        if (choice == 'q') {
            break;
        } else if (choice >= 'a' && choice <= 'd') {
            int index = choice - 'a';
            (*funcs[index])();
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }
    printf("Bye!\n");
    return 0;
}

