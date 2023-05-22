#include <stdio.h>

int main() {
    int rows, cols; // rows - N, cols - M
    scanf("%d %d", &rows, &cols);
    int array[rows][cols]; // Создание пустого массива

    for (int r=0; r<rows; r++) {
        for (int c=0; c<cols; c++) {
            scanf("%d", &array[r][c]);
        }
    }

    int mins, maxs = 0, minind = 0, maxind = 0; // Переменные минимальной суммы и максимальной суммы, индексы их столбцов

    for (int r=0; r<rows; r++) {
        maxs += array[r][0]; // Заполнение переменных суммой значений из первого столбца 
    }
    mins = maxs;

    int sumbuff = 0; // Переменная - Сумма значений из одного столбика (перезаписывается в цикле)

    for (int c=0; c<cols; c++) {
        for (int r=0; r<rows; r++) {
            sumbuff += array[r][c]; // Сумма значений из одного столбика
        }

        if (sumbuff > maxs) {
            maxs = sumbuff; // Перезапись максимальной суммы
            maxind = c;     // Запоминание индекса столбца
        } else if (sumbuff < mins) {
            mins = sumbuff; // Перезапись максимальной суммы
            minind = c;     // Запоминание индекса столбца
        }
        sumbuff = 0; // Сброс переменной
    }

    int arrbuff[rows];
    for (int r=0; r<rows; r++) { // Сохранение одного из запомненных столбцов в буфер (max)
        arrbuff[r] = array[r][maxind];
    }
    for (int r=0; r<rows; r++) { // Замена столбца с max значениями столбцом с min
        array[r][maxind] = array[r][minind];
    }
    for (int r=0; r<rows; r++) { // Конечная замена столбца min столбцом max с помощью буфера
        array[r][minind] = arrbuff[r];
    }

    for (int r=0; r<rows; r++) { // Вывод
        for (int c=0; c<cols; c++) {
            printf("%d ", array[r][c]);
        }
        printf("\n");
    }
}