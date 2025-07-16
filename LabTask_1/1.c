
#include <stdio.h>

int main() {
    int a[15];
    for (int i = 0; i < 15; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < 15; i++)
        printf("%d ", a[i]);

    return 0;
}
