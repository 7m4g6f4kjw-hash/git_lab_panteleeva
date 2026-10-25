#include <stdio.h>

int main(void) {
    int a, b;

    printf("Введите два целых числа: ");
    scanf("%d %d", &a, &b);

    printf("Разность = %d\n", a - b);

    return 0;
}
