// Faça um programa que carregue uma matriz 6 x 3, calcule e mostre:
// • o maior elemento da matriz e sua respectiva posição, ou seja, linha e
// coluna;
// • o menor elemento da matriz e sua respectiva posição, ou seja, linha e
// coluna.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int arr1[6][3];
    int num1;
    int menor;
    int maior;
    
    // generate first two vectors
    printf("arr1 arr2\n");
    for (int k = 0; k < 6; k++) {
        for (int i = 0; i < 3; i++) {
            num1 = (rand() % 100) + 1;
            arr1[k][i] = num1;
            printf("%d\n", arr1[k][i]);
        }
    }

    for (int k = 0; k < 6; k++) {
        for (int i = 0; i < 3; i++) {
            if (i==0 && k==0) {
                menor = arr1[k][i];
                maior = arr1[k][i];
            }
            if (maior < arr1[k][i]) {
                maior = arr1[k][i];
            }
            if (menor > arr1[k][i]) {
                menor = arr1[k][i];
            }
        }
    }
    printf("esse eh o maior: %d\n", maior);
    printf("esse eh o menor: %d\n", menor);

    return 0;
}