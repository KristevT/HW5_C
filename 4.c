#include <stdio.h>

void reduce_fraction(int *a, int *b) {
    int min = (*a < *b) ? *a : *b; // Находим наименьшее из чисел

    for (int i = min; i > 0; i--) { // Нахождение общего делителя, сокращение
        if (*a % i == 0 && *b % i == 0) {
            *a /= i;
            *b /= i;
            break;
        }
    }
    printf("%d %d", *a, *b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    reduce_fraction(&a, &b);
}