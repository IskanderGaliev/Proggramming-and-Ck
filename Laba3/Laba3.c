#include <stdio.h>  // библиотека ввода-вывода

int main()
{
    printf("Laboratory work 3. Representation of numbers in different number systems and bit operations.");
    int octal1 = 0;  // объявление целого числа, которое в Задании 1 будет представлено в 8-ном формате

    printf("\nEnter a first number in 8th numeral system: ");  // Задание 1
    scanf(" %x", &octal1);

    printf("Your number in 10th numeral system: %o\n", octal1);  // Задание 2

    printf("Your number in 8th numeral system: %o\n", octal1);  // Задание 3 и 4
    printf("Your number in 8th numeral system with shifting all of bits to the left by 3 digits: %o\n", octal1 >> 3);
    printf("Your number in 8th numeral system after inverting all of bits: %o\n", ~octal1); // Задание 4

    int octal2 = 0;;
    printf("\nEnter a second number in 8th numeral system: ");  // Задание 5
    scanf(" %o", &octal2);
    printf("The result of a bitwise operation or between two numbers in 8-bit format: %o\n", octal1 || octal2);

    return 0;
}
