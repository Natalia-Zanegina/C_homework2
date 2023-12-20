/*
Задача 3. Разность двух чисел.
Ввести два числа и найти их разность.
Нужно напечатать разность двух чисел.
*/

#include <stdio.h>

int main(void) {
    int a, b;
    printf("Input 2 numbers: \n");
    scanf("%d%d", &a, &b);
    printf("%d\n", a - b);
    return 0;
}