#include <stdio.h>


void multiplicaArrayCruzado(int array1[], int array2[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d * %d = %d\n", array1[i], array2[tamanho - i - 1], array1[i] * array2[tamanho - i - 1]);
    }
}

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};
    int tamanho = sizeof(array1) / sizeof(array1[0]);

   multiplicaArrayCruzado(array1, array2, tamanho);

    return 0;
}
