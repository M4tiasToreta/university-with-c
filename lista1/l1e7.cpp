// Created by Nathan @ 08-10-24
// Faça um programa que carregue uma matriz 3 x 5 com números inteiros
// calcule e mostre a quantidade de elementos entre 15 e 20
#include <stdio.h>

int main()
{
    int arr[3][5], between[15]; // Declaring matrix and array
    // Loop for capturing the array values
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("type the number in the position %dx%d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int total = 0; // Variable that will hold the total amount of numbers between 15 and 20
    // Loop for checking wich the values are between the desired range
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] > 15 && arr[i][j] < 20)
            {
                between[total] = arr[i][j];
                total += 1;
            }
        }
    }

    // Printing the results
    printf("The total of numbers between 15 and 20 is: %d\n", (total));

    if (total > 0){
        printf("Those being: ");
        for (int i = 0; i < total; i++)
        {
            printf("[%d] ", between[i]);
        }
    }
}