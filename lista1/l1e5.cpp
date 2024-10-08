// Created by Nathan @ 08-10-24
// Faça um programa que leia um vetor de 15 posições com números inteiros
// Crie, a seguir, um vetor resultante que contenha todos os números primos do vetor digitado
// Escreva o vetor resultante
#include <stdio.h>

int main()
{
    int arr[15], prime[15]; // Declaring arrays that will be populated and that will contain prime numbers
    // Loop for capturing 15 numbers
    for (int i = 0; i < 15; i++)
    {
        printf("type the %d number: ", (i + 1));
        scanf("%d", &arr[i]);
    }

    int k = 0;// Counter for prime array
    // Loop for checking prime numbers in the array
    for (int i = 0; i < 15; i++)
    {
        bool p = true;
        for (int j = 2; j <= arr[i] / 2; j++)
        {
            if (arr[i] % j == 0 && arr[i] != 1)
            {
                p = false;
                break;
            }
        }
        if (p)
        {
            prime[k] = arr[i];
            k += 1;
        }
    }

    if(k == 0){
        printf("No prime number was found");
        return 0;
    }
    // printing each prime number
    for (int i = 0; i < k; i++)
    {
        printf("%d ", prime[i]);
    }
    return 0;
}