#include <stdio.h>

int main ()
{
    int size;
    printf("Enter queue size: ");
    scanf("%d",&size);

    int queue[size];
    int Rear = -1, Front = -1;
    int option;

    while(1)
    {
        printf("\n\nType..\n1 to Enqueue\n2 to Dequeue\n3 to check if the Queue is Empty\n4 to check if the Queue is Full\n0 to exit\n");
        scanf("%d", &option);

        if(option==1)
        {
            if(Rear == size-1)
            {
                printf("Overflow\n");
            }
            else
            {
                int item;
                printf("Enter value to Enqueue: ");
                scanf("%d", &item);

                if (Front == -1)
                    Front = 0;

                Rear++;
                queue[Rear] = item;
            }

            printf("Queue: ");
            if(Front == -1 )
                printf("Empty");
            else
            {
                for(int i = Front; i <= Rear; i++)
                    printf("%d ",queue[i]);
            }
            printf("\n");
        }

        else if(option==2)
        {
            if(Front == -1 || Front > Rear)
            {
                printf("Underflow\n");
                Front = -1;
                Rear = -1;
            }
            else
            {
                printf("Dequeued: %d\n", queue[Front]);
                Front++;
            }

            printf("Queue: ");
            if(Front == -1 || Front > Rear)
                printf("Empty");
            else
            {
                for(int i = Front; i <= Rear; i++)
                    printf("%d ",queue[i]);
            }
            printf("\n");
        }

        else if(option==3)
        {
            if (Front == -1 || Front > Rear)
                printf("Queue is Empty \n");
            else
                printf("Queue is not Empty \n");
        }

        else if(option==4)
        {
            if (Rear == size - 1)
                printf("Queue is Full\n");
            else
                printf("Queue is not Full\n");
        }

        else if(option==0)
        {
            return 0;
        }

        else
            printf("Invalid input.\n");
    }
    return 0;
}