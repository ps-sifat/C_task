#include<stdio.h>
int main()
{
        int size, k1, k2;
    scanf("%d", &size);
    int L[size], r=size/2;
    for(int i= 0; i<size; i++)
    {
        scanf("%d", &L[i]);
    }
    for(int i= 0; i<size; i++)
    {
        printf("%d", L[i]);
    }

    int a[r+1], b[r];
    for(int i=0; i<r+1; i++){
        a[i]=L[i];
    }
    int j=r+1;
    for(int i=0; i<r; i++){
        b[i]=L[j];
     j++;
    }
    scanf("%d %d", &k1, &k2);
     for(int i= 0; i<r+1; i++)
    {
       if(a[i]==k1){
       printf("locaion: %d corresponding number: %d\n",i, a[i]);
       break;
       }
       /*else{
        printf("number is not found\n");
       }*/
    }

    int beg= 0,loc=-1, end= r-1, mid;
    while( beg <= end)
    {
        mid=(beg+end)/2;
        if(k2< b[mid])
        {
            end= mid-1;
        }
        if(k2> b[mid])
        {
            beg= mid+1;
        }
        if(k2 == b[mid])
        {
            loc=mid;
            printf("%d\n", loc);
             break;
        }

    }
    if(loc == -1)
    {
        printf("item is not found\n");
    }

        return 0;
}
