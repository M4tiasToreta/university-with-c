// Faça um programa que leia dois vetores de dez posições e faça a multiplicação
// dos elementos de mesmo índice, colocando o resultado em um terceiro vetor.
// Mostre o vetor resultante.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int num1;
    int num2;
    int arr1[10];
    int arr2[10];
    int arr3[10];
    
    // generate first two vectors
    printf("arr1 arr2\n");
    for (int i = 0; i < 10; i++) {
        num1 = (rand() % 100) + 1;
        num2 = (rand() % 100) + 1;
        arr1[i] = num1;
        arr2[i] = num2;
        printf("%d    ", arr1[i]);
        printf("%d\n", arr2[i]);
    }

    printf("arr3\n");
    for (int i = 0; i < 10; i++) {
        arr3[i] = arr1[i]*arr2[i];
        printf("%d\n", arr3[i]);
    }

    return 0;
}