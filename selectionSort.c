#include <stdio.h>

int main()
{
    int N2;
    printf("Enter Array Size: ");
    scanf("%d", &N2);

    int A2[N2];
    printf("Enter %d numbers: ", N2);
    for (int i = 0; i < N2; i++)
    {
        scanf("%d", &A2[i]);
    }

    printf("\nOriginal Array: ");
    for (int i = 0; i < N2; i++)
    {
        printf("%d ", A2[i]);
    }
    printf("\n");
    //======================

    for (int i = 0; i < N2 - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < N2; j++)
        {
            if (A2[j] < A2[min])
            {
                min = j;
            }
        }
        int temp = A2[i];
        A2[i] = A2[min];
        A2[min] = temp;
    }
    //=================
    printf("\nFinal Selection Sort Array: ");
    for (int k = 0; k < N2; k++)
    {
        printf("%d ", A2[k]);
    }
    printf("\n");

    return 0;
}