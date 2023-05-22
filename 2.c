#include <stdio.h>

struct Person {                   // Создание структуры типа Person 
    int age;
    char name[30];
};

float averageAge(struct Person arr[], int n) {
    float sum = 0.0;
    for (int i = 0; i < n; i++) { // Подсчёт среднего арифметического
        sum += arr[i].age;
    }
    printf("%f", sum/n);
}

int main() {
    int n;
    scanf("%d", &n);              // Ввод числа N
    struct Person p[n];           // Создание N структур
    for (int i = 0; i < n; i++) { // Цикл ввода N структур - имя, возраст
        scanf("%s", p[i].name);
        scanf("%d", &p[i].age);
    }
    averageAge(p, n);
}