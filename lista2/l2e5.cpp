// Created by Nathan @ 21-10-24
// Faça um programa que, envie para uma função uma string com um nome abreviado
// por exemplo: “João M. da Silva” ou “José H. M. Araújo”.
// A função deve ser capaz de identificar as abreviações e apresentar na tela,
// somente o os nomes que não estão abreviados.

#include <string.h>
#include <stdio.h>
#include <math.h>

void find_abbrev(char name[50])
{
    bool found;
    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] == '.')
        {
            printf("Abreviação encontrada: %c%c\n", name[i - 1], name[i]);
            found = true;
        }
    }
    if (!found)
    {
        printf("Nenhuma abreviação encontrada");
    }
}

int main(void)
{
    char name[50];
    printf("Digite o nome: ");
    fgets(name, sizeof(name), stdin);
    find_abbrev(name);
    return 0;
}