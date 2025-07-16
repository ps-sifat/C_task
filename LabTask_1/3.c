#include<stdio.h>
int main ()
{
    int i, n, index;
    printf("Array size: ");
    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter Index to delete:\n");
    scanf("%d", &index);

    for(i = index; i < n - 1; i++){
        a[i] = a[i + 1];  // shift left
    }
    n--;

    printf("Updated array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

