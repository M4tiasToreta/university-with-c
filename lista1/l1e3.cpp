// Created by Nathan @ 08-10-24
// Faça um programa que receba o total das vendas de cada vendedor e armazene-as em um vetor.
// Receba também o percentual de comissão de cada vendedor e armazene-os em outro vetor.
// Receba os nomes desses vendedores e armazene-os em um terceiro vetor.
// Existem apenas 10 vendedores. Calcule e mostre:
// um relatório com os nomes dos vendedores e os valores a receber;
// o total das vendas de todos os vendedores;
// o maior valor a receber e quem o receberá;
// o menor valor a receber e quem o receberá.
#include <stdio.h>


int main()
{
    char names[10][20];
    float total[10], percentages[10], comission[10], total_store_sales = 0;
    for (int i = 0; i < 2; i++)
    {
        printf("Type the vendor %d name: ", (i + 1));
        scanf("%s", &names[i]);

        printf("\nType %s's comission percentage (e.g: 70% -> 70): ", names[i]);
        scanf("%f", &percentages[i]);

        printf("\nType %s's total sales: ", names[i]);
        scanf("%f", &total[i]);
    }

    float maior = 0, menor = 0;
    int im, in;

    for (int i = 0; i < 2; i++)
    {

        total_store_sales += total[i];

        comission[i] = total[i] * (percentages[i] / 100);

        if (menor == 0)
        {
            menor = comission[i];
            in = i;
        }

        if (comission[i] > maior)
        {
            maior = comission[i];
            im = i;
        }
        else if (comission[i] < menor)
        {
            
            menor = comission[i];
            in = i;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        printf("Name: %s \t| Total Sales: %.2f \t| Comission: %.2f\n", names[i], total[i], comission[i]);
    }
    
    printf("\nThe total revenue was: %.2f", total_store_sales);
    printf("\nBiggest pay check is %s's  with a total of %.2f", names[im], maior);
    printf("\nSmallest pay check is %s's  with a total of %.2f", names[in], menor);
}