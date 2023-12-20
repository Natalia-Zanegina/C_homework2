/*
Задача 2. Сумма и произведение трех чисел.
Ввести три числа, найти их сумму и произведение.
Нужно напечатать сумму и произведение трех чисел.
*/
#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Input 3 numbers: \n");
    scanf("%d%d%d", &a, &b, &c);
    printf("%d + %d + %d = %d\n", a, b, c, a + b + c);
    printf("%d * %d * %d = %d\n", a, b, c, a * b * c);
    return 0;
}