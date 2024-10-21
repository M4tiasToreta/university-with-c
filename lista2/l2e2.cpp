// Created by Nathan @ 08-10-24
#include <string.h>
#include <stdio.h>

const char* success() {
    const char *bolo="Acerto miseravi";
    return bolo;
}

int main(void)
{
    while (true) {
        char nome[60]={}, nome_acomparar[60]={};

        printf("Digite um nome:\n");
        scanf("%s", nome_acomparar);
        printf("Digite um nome pra comparar:\n");
        scanf("%s", nome);
        if (strcmp(nome, nome_acomparar) == 0) {
            printf("%s\n", success());
            break;
        }
        else {
            printf("Tenta de novo, burrão\n");
        }
    }
    return 0;
}

