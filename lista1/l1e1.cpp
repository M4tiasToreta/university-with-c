// Faça um programa que carregue um vetor de seis elementos numéricos inteiros,
// calcule e mostre:
// • a quantidade de números pares;
// • quais os números pares;
// • a quantidade de números ímpares;
// • quais os números ímpares.
#include <stdio.h>

int main() {
    int bolo[6]; // Declaração do vetor chamado bolo
    int i;
    int qtde_pares=0;
    int qtde_impares=0;

    // Loop para capturar os 6 inteiros
    printf("Digite 6 numeros inteiros:\n");
    for(i = 0; i < 6; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &bolo[i]);
    }

    // Imprimindo os valores do vetor
    printf("\nOs numeros impares digitados foram:\n");
    for(i = 0; i < 6; i++) {
        if (bolo[i] % 2 != 0) {
            printf("%d ", bolo[i]);
            qtde_impares += 1;
        }
        else {
            qtde_pares += 1;
        }
    }
    printf("\nOs numeros pares digitados foram:\n");
    for(i = 0; i < 6; i++) {
        if (bolo[i] % 2 == 0) {
            printf("%d ", bolo[i]);
        }
    }
    printf("\n%d pares \n", qtde_pares);
    printf("Com %d impares", qtde_impares);

    printf("\n");
    return 0;
}