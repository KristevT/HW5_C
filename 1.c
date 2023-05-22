#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
   int n;
   scanf("%d", &n);
   int arr[n];
   for (int i = 0; i < n; i++) { // Ввод массива
      scanf("%d", &arr[i]);
   }

   for (int i = 0; i < n/2; i++) {
      int buff = arr[i]; // Сохраняем число из первой половины в буфер
      arr[i] = arr[i + n/2]; // Заменяем число из первой половины числом из второй
      arr[i + n/2] = buff; // Замена числа из второй половины
   }


   for (int i = 0; i < n; i++) { // Вывод массива
      printf("%d ", arr[i]);
   }
}