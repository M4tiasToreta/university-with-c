#include <stdio.h>

int main()
{
    int arr[3][5], between[15];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("type the number in the position %dx%d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int total = 0;
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

    printf("The total of numbers between 15 and 20 is: %d\nThose being: ", (total));

    for (int i = 0; i < total; i++)
    {
        printf("[%d] ",between[i]);
    }
}