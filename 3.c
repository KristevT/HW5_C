#include <stdio.h>

struct Move {                   // Создание структуры типа Move
    int x;
    int y;
};

struct Move getFinishPoint(struct Move arr[], int n) {
    for (int i = 1; i < n; i++) { // Цикл сложения координат
        arr[i].x += arr[i-1].x;
        arr[i].y += arr[i-1].y;
        if (i == n-1) {           // Вывод финальной точки
            printf("%d %d", arr[i].x, arr[i].y);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);              // Ввод числа N
    struct Move p[n];             // Создание N структур
    for (int i = 0; i < n; i++) { // Цикл ввода N структур - x, y
        scanf("%d", &p[i].x);
        scanf("%d", &p[i].y);
    }
    getFinishPoint(p, n);
}