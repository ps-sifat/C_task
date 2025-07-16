#include<stdio.h>
int main() {
    int i, n, a[100], a1[100], a2[100], n1, n2;

    printf("Enter size of array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    n1 = n / 2 + 1;
    n2 = n / 2;

    // Fill first half (+1 if n is odd)
    for(i = 0; i < n1; i++)
        a1[i] = a[i];

    // Fill second half
    for(i = 0; i < n2; i++)
        a2[i] = a[n1 + i];

    // Output first array
    printf("N1 = %d\nA1 = ", n1);
    for(i = 0; i < n1; i++)
        printf("%d ", a1[i]);

    // Output second array
    printf("\nN2 = %d\nA2 = ", n2);
    for(i = 0; i < n2; i++)
        printf("%d ", a2[i]);

    return 0;
}

