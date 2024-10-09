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
#define N 3 // defines total amount of vendors

// declaring vendor struct
struct vendor
{
    char name[50];
    float percentage;
    float comission;
    float total_sales;
};

struct vendor vendors[N];

int main()
{
    // Loop for capturing N amount of vendors
    for (int i = 0; i < N; i++)
    {
        printf("Type the vendor %d name: ", (i + 1));
        scanf("%s", &vendors[i].name);

        printf("\nType %s's comission percentage (e.g: 70): ", vendors[i].name);
        scanf("%f", &vendors[i].percentage);

        printf("\nType %s's total sales: ", vendors[i].name);
        scanf("%f", &vendors[i].total_sales);
    }

    float total_store_sales = 0, greater = 0, lower = 0; // declaring total sales, lower and greater values for comparison
    int g, l;                                            // store index of greater and lower values

    // Loop for reading N amount of vendors and calculate total, greater and lower sales
    for (int i = 0; i < N; i++)
    {
        total_store_sales += vendors[i].total_sales;

        vendors[i].comission = vendors[i].total_sales * (vendors[i].percentage / 100);

        if (lower == 0)
        {
            lower = vendors[i].comission;
            l = i;
        }

        if (vendors[i].comission > greater)
        {
            greater = vendors[i].comission;
            g = i;
        }
        else if (vendors[i].comission < lower)
        {

            lower = vendors[i].comission;
            l = i;
        }
    }

    printf("\n");

    for (int i = 0; i < N; i++)
    {
        printf("Name: %s \t| Total Sales: %.2f \t| Comission: %.2f\n", vendors[i].name, vendors[i].total_sales, vendors[i].comission);
    }

    printf("\nThe total revenue was: %.2f", total_store_sales);
    printf("\nBiggest pay check is %s's  with a total of %.2f", vendors[g], greater);
    printf("\nSmallest pay check is %s's  with a total of %.2f", vendors[l], lower);
}