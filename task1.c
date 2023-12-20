/*
Задача 1. Сумма трех чисел.
Ввести три числа, найти их сумму.
Нужно напечатать сумму трех чисел.
*/

#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Input 3 numbers: \n");
    scanf("%d%d%d", &a, &b, &c);
    printf("%d + %d + %d = %d\n", a, b, c, a + b + c);
    return 0;
}