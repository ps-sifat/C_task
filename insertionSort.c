#include<stdio.h>
// insertion Sort ========

int main ()
{
    int N1;
    printf("Enter Array Size : ");
    scanf("%d",&N1);
    int A1[N1];
    printf("Enter %d no. of Array : ",N1);
    for(int i=0; i<N1; i++)
    {
        scanf("%d",&A1[i]);
    }
    printf("\nArray: ");
    for(int i=0; i<N1; i++)
    {
        printf("%d ",A1[i]);
    }
    printf("\n");
    for (int i = 1; i < N1; i++)
    {
        int temp = A1[i];
        int j = i - 1;
        while (j >= 0 && A1[j] > temp)
        {
            A1[j + 1] = A1[j];
            j--;
        }
        A1[j + 1] = temp;
    }
    printf("Final insertion sort array :\n");
    for(int k=0; k<N1; k++)
    {
        printf("%d ",A1[k]);
    }
    printf("\n");
    return 0;

}