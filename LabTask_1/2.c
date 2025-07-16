#include<stdio.h>
int main ()
{
    int i, n, index, value;
    printf("Array size: ");
    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter Index:\n");
    scanf("%d", &index);

    printf("Enter Value:\n");
    scanf("%d", &value);

    for(i = n - 1; i > index; i--)
        a[i] = a[i - 1];  // right_shift

    a[index] = value;  // index value update

    printf("Updated array:\n");
    for(i = 0; i < n; i++)  // same size as before
        printf("%d ", a[i]);

    return 0;
}
