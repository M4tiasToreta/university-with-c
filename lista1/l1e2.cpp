// Created by Nathan @ 08-10-24
// Faça um programa que carregue um vetor com 15 elementos inteiros
// Verifique a existência de elementos iguais a 30
// Mostrar as posições em que esses elementos apareceram.
#include <stdio.h>

int main()
{
    int arr[15]; // declaring array that'll hold the numbers
    bool found = false;

    // loop for reading the values
    for (int i = 0; i < 15; i++)
    {
        printf("type the %d number: ", (i + 1));
        scanf("%d", &arr[i]);
    }

    //loop for finding the positions in the array that are equal to 30
    for (int i = 0; i < 15; i++)
    {
        if (arr[i] == 30)
        {
            printf("found number 30 in %d position of array", i);
            found = true;
        }
    }

    // if not found print
    if (found == false)
    {
        printf("No number 30 found in array");
    }
}