#include <stdio.h>
#include <locale.h>


#define N 10  

int main() {
    setlocale(LC_ALL, "Russian");

    float A[N];
    float temp;
    float sum = 0.0f;

    
    printf("Введите %d вещественных чисел:\n", N);
    for (int i = 0; i < N; i++) {
        printf("a[%d] = ", i + 1);
        scanf("%f", &temp);
        A[i] = temp;
    }

   
    printf("\n%-10s %-20s %-20s\n", "индекс", "исходное значение", "новое значение");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < N; i++) {
        float newVal = ceilf(A[i]);          
        printf("%-10d %-20.4f %-20.4f\n", i, A[i], newVal);
    }

   
    for (int i = 0; i < N; i++) {
        sum += A[i];
    }
    printf("\nСреднее арифметическое элементов массива: %.4f\n", sum / N);

    return 0;
}