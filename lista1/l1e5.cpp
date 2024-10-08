#include <stdio.h>

int main()
{
    int arr[15], prime[15];
    bool found = false;
    for (int i = 0; i < 15; i++)
    {
        printf("type the %d number: ", (i + 1));
        scanf("%d", &arr[i]);
    }

    int k = 0;
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
    
    for (int i = 0; i < k; i++)
    {
        printf("%d \n", prime[i]);
    }
}