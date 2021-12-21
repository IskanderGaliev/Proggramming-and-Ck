#include <stdio.h>   // библиотека ввода-вывода
#include <conio.h>   // библиотека консольного ввода-вывода
#include <math.h>    // библиотека математических функций

int main()  // Главная функция. Реализует ввод, проверку, интерфейс с пользователем.
{
    float alpha, z, z1, z2,;  // Объявление переменных
    float pi = 3.141592;

    printf("Laboratory work 2. Calculation of the value of the function at a given point.");
    printf("\nEnter a value of alpha: ");  // Ввод α
    scanf(" %f", &alpha);

    z1 = pow(cos((float)3/8 * pi - alpha/4),2) - pow(cos((float)11/8 * pi + alpha/4),2);  // Вычисление z1
    z2 = sqrt(2)/2 * sin(alpha/2);  // Вычисление z2

    printf("z1 equals = %f\n", z1);
    printf("z2 equals = %f\n", z2);

    return 0;
}
