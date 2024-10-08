// Created by Nathan @ 08-10-24
// Faça um programa que leia um vetor de 15 posições de números inteiros
// Divida todos os seus elementos pelo maior valor do vetor
// Mostre o vetor após os cálculos
// Pergunta ao professor: os valores sempre serão zerados já que são numeros inteiros? (É isso que ele quer?)
#include <stdio.h>

int main()
{
    int arr[15]; // Declaring array 
    // Loop for capturing 15 numbers
    for (int i = 0; i < 15; i++)
    {
        printf("type the %d number: ", (i + 1));
        scanf("%d", &arr[i]);
    }

    int greater = arr[0]; // Declaring  
    for (int i = 1; i < 15; i++)
    {
        if (arr[i] > greater)
        {
            greater = arr[i];
        }
    }

    for (int i = 0; i < 15; i++)
    {
        arr[i] = arr[i] / greater;
    }

    for (int i = 0; i < 15; i++)
    {
        printf("[%d] ", arr[i]);
    }
}