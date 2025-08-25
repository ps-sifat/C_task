#include <stdio.h>


int main ()
{


    //take stack size from the user as input
    //declare the stack of that specified size
    //declare a variable named as top, initially the value of top will be -1

    int size;
    scanf("%d",&size);
    int stack[size];
    int top= -1;

    while(1)
    {
        int option;
        printf("\n\nType..\n1 to push\n2 to pop\n3 to check if the stack is Empty\n4 to check the stack is Full\n5 to check size\n6 to check top\n7 to Peek\n0 to exit\n");
        scanf("%d", &option);
        if(option==1)
        {
            //If Top = maximum size of the stack then Print: Overflow and Return.
            //else ask user what value to push, name it as “push”
            //increment the value of top by 1
            if(top==size-1)
            {
                printf("Overflow");
            }
            else
            {
                int push;
                printf("Enter push value :");
                scanf("%d",&push);
                top++;
                //insert the specified number of “push” in the “top”-th index of the stack
                stack[top]=push;


            }
            //After the if else loop print the stack
            for(int i=0; i<=top; i++)
            {
                printf("%d ",stack[i]);
            }
            printf("\n");


        }
        else if(option==2)
        {
            //If top = -1 then Print: Underflow and Return.
            // else insert a null in the “top”-th index
            // decrement the value of top by 1
            // After the if else loop print the stack
            if(top== -1)
            {
                printf("Underflow");

            }
            else
            {
                //null
                stack[top]='\0';
                top--;
            }
            //stack
            printf("Stack: ");
            for(int i=0; i<=top; i++)
            {
                printf("%d ",stack[i]);
            }
            printf("\n");

        }

        else if(option==3)
        {
            //return true(1) if stack is empty, false(0) otherwise
            if(top == -1)
            {
                printf("stack is empty \n");
            }
            else
            {
                printf("stack is not empty\n");
            }


        }
        else if(option==4)
        {
            //return true(1) if stack is Full, false(0) otherwise
            if(top == size - 1)
                printf("stack is full\n");
            else
                printf("stack is not full\n");
        }
        else if(option ==5)
        {
            printf("size: %d",top+1);
        }
        else if(option ==6)
        {
            if(top==-1)
            {
                printf("Stack is empty, no top index\n");
            }
            else
            {
                printf("Top index: %d\n", top);
            }
        }
        else if(option==7)
        {
            if(top==-1)
            {
                printf("Stack is empty, nothing to peek\n");
            }
            else
            {
                printf("Peek top value: %d\n", stack[top]);
            }
        }
        else if(option==0)
        {
            return 0;
        }


        else printf("Invalid input.\n");
    }
    return 0;
}
