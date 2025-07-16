#include<stdio.h>
int main() {
    int i, n1, n2, a1[100], a2[100], a[200];

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    for(i = 0; i < n1; i++)
        scanf("%d", &a1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    for(i = 0; i < n2; i++)
        scanf("%d", &a2[i]);

    // Merge arrays
    for(i = 0; i < n1; i++)
        a[i] = a1[i];
    for(i = 0; i < n2; i++)
        a[n1 + i] = a2[i];

    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++)
        printf("%d ", a[i]);

    return 0;
}
