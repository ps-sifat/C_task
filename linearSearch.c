#include<stdio.h>
int main()
{
    int size;
    printf("Enter Array size: ");
    scanf("%d", &size);
    int L[size];
    printf("Enter %d number: ",size);
    for(int i=0; i<size; i++)
    {
        scanf("%d", &L[i]);
    }

    for(int i=0; i<size; i++)
    {
        printf("%d ", L[i]);
    }
    printf("\n");

    int key;
    printf("Enter the Search value: \n");
    scanf("%d", &key);

    int loc = -1;

    // Linear Search
    for(int i=0; i<size; i++)
    {
        if(L[i] == key)
        {
            loc = i;
            printf("%d\n", loc);
            break;
        }
    }

    if(loc == -1)
    {
        printf("Item is not in list\n");
    }
    return 0;
}
