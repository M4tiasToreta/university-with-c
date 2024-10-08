#include <stdio.h>

int main()
{
    int arr[15];
    for (int i = 0; i < 15; i++)
    {
        printf("type the %d number: ", (i + 1));
        scanf("%d", &arr[i]);
    }

    int maior = arr[0];
    for (int i = 1; i < 15; i++)
    {
        if (arr[i] > maior)
        {
            maior = arr[i];
        }
    }
    
    for (int i = 0; i < 15; i++)
    {
       arr[i] = arr[i]/maior;
    }

    for (int i = 0; i < 15; i++)
    {
       printf("[%d] ",arr[i]);
    }
}