#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define N    100      
#define XMIN -10.0    
#define XMAX  10.0   

double f(double x) {
    
    return sin(x) + x * x / 10.0;
}

int main() {

    setlocale(LC_ALL, "Russian");
    double A[N];

    
    srand((unsigned)time(NULL));

 
    for (int i = 0; i < N; i++) {
        double x = XMIN + (XMAX - XMIN) * rand() / RAND_MAX;
        A[i] = f(x);
    }

   
    int    countPos = 0, countNeg = 0;
    double sumPos = 0.0, sumNeg = 0.0;

    for (int i = 0; i < N; i++) {
        if (A[i] > 0) {
            sumPos += A[i];
            countPos++;
        }
        else if (A[i] < 0) {
            sumNeg += A[i];
            countNeg++;
        }
    }

 
    double avgPos = (countPos > 0) ? sumPos / countPos : 0.0;
    double avgNeg = (countNeg > 0) ? sumNeg / countNeg : 0.0;


    printf("Массив A[%d]:\n", N);
    printf("  Сумма положительных  = %10.4f  (кол-во: %d)\n", sumPos, countPos);
    printf("  Сумма отрицательных  = %10.4f  (кол-во: %d)\n", sumNeg, countNeg);
    printf("  Среднее положительных = %10.4f\n", avgPos);
    printf("  Среднее отрицательных = %10.4f\n", avgNeg);

    return 0;
}