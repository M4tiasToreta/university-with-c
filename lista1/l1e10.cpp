// Faça um programa que calcule e mostre a média dos elementos da diagonal
// principal de uma matriz 10 x 10.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int matrice[10][10], num1, soma=0, media;
    
    printf("matrice1 matrice2\n");
    for (int k = 0; k < 10; k++) {
        for (int i = 0; i < 10; i++) {
            num1 = (rand() % 100) + 1;
            matrice[k][i] = num1;
            printf("%d  \n", matrice[k][i]);
        }
    }

    for (int k = 0; k < 6; k++) {
        for (int i = 0; i < 4; i++) {
            if (i==k) {
                soma += matrice[k][i];
            }
        }
    }
    printf("media da diagonal: \n");
    media = soma/10;
    printf("%d \n", media);


    return 0;
}