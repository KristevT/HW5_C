#include <stdio.h>

int abs_arr(int *arr, int n);

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) { // Ввод массива
        scanf("%d", &arr[i]);
    }

abs_arr(arr, n); // Запуск функции

for (int i = 0; i < n; i++) { // Вывод массива
    printf("%d ", arr[i]);
}
}

int abs_arr(int *arr, int n) {
    for (int *u = arr; u < arr+n; u++) { // u - указатель на элемент массива (замена arr[i])
        if (*u < 0) {
            *u = -*u; // Замена отрицательных элементов
        }
    }
    return 0;
}