// Created by Nathan @ 08-10-24
#include <string.h>
#include <stdio.h>

int eh_par(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    return 0;
}

float media(float num1, float num2)
{
    float tt;

    tt = (num1 + num2) / 2;

    return tt;
}

int main(void)
{
    char letra[1];

    while (2 > 1)
    {
        printf("Escolha uma entre as próximas opcoes digitando na a letra da opcao.\n");
        printf("a) Descubra se um número é par\n");
        printf("b) Descubra a média entre dois numeros\n");
        printf("s) para sair\n");
        printf("Digite a letra:\n");
        scanf("%s", letra);
        if (strcmp(letra, "a") == 0)
        {
            int num1, par;
            printf("Digite um número inteiro: \n");
            scanf("%d", &num1);
            par = eh_par(num1);
            if (par == 1)
            {
                printf("O número %d é par\n", num1);
            }
            else
            {
                printf("O número %d não é par\n\n", num1);
            }
        }
        else if (strcmp(letra, "b") == 0)
        {
            float num1, num2, tt;
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
            tt = media(num1, num2);
            printf("A média é: %.2f\n\n", tt);
        }
        else if (strcmp(letra, "s") == 0)
        {
            break;
        }
        else
        {
            printf("Por favor, selecione uma letra válida.\n");
        }
    }
    return 0;
}