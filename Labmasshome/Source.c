#include <stdio.h>
#include <locale.h>


#define N 10   

int main() {
    setlocale(LC_ALL, "Russian");
    int A[N];
    int lastIndex = -1;   

  
    printf("Введите %d целых чисел:\n", N);
    for (int i = 0; i < N; i++) {
        printf("a[%d] = ", i + 1);
        scanf("%d", &A[i]);
    }

    
    for (int i = N - 1; i >= 0; i--) {
        if (A[i] < 0 && A[i] % 3 == 0) {
            lastIndex = i;
            break;
        }
    }

    
    if (lastIndex != -1) {
        printf("\nНомер последнего отрицательного элемента,\n");
        printf("делящегося на 3 без остатка: %d\n", lastIndex);
        printf("(его значение: %d)\n", A[lastIndex]);
    }
    else {
        printf("\nВ массиве нет отрицательных элементов, делящихся на 3.\n");
    }

    return 0;
}