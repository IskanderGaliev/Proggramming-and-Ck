#include <stdio.h>   // библиотека ввода-вывода

int main()
{

    printf("Laboratory work 1: Developing a Console Application.");

    char str;
    char string[41];
    char character;

    printf("\nEnter a string: ");
    scanf(" %s", &string);

    printf("\nEnter a char: ");
    scanf(" %s", &character);

    printf("\nThe string you entered: %s\n", string);
    printf("The char you entered: %c\n", character);

    return 0;
}
