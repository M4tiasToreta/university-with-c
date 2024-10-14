// Faça um programa que carregue uma matriz M de ordem 4 x 6 e uma segunda
// matriz N de ordem 6 x 4, calcule e imprima a soma das linhas de M com as
// colunas de N.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int matrice1[4][6], matrice2[6][4], matrice3[6][4], num1, num2, menor, maior;
    
    printf("matrice1 matrice2\n");
    for (int k = 0; k < 4; k++) {
        for (int i = 0; i < 6; i++) {
            num1 = (rand() % 100) + 1;
            num2 = (rand() % 100) + 1;
            matrice1[k][i] = num1;
            matrice2[i][k] = num2;
            printf("%d  ", matrice1[k][i]);
            printf("%d\n", matrice2[i][k]);
        }
    }

    printf("resultado: \n");
    for (int k = 0; k < 6; k++) {
        for (int i = 0; i < 4; i++) {
            matrice3[k][i] = matrice1[k][i]+matrice2[i][k];
            printf("%d\n", matrice3[k][i]);
        }
    }

    return 0;
}