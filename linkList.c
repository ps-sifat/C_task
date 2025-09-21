#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

// 1. Insert at beginning
void beginsert() {
    struct node *ptr;
    int item;
    ptr = malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("\nMemory allocation failed\n");
        return;
    }
    printf("\nEnter value: ");
    scanf("%d", &item);
    ptr->data = item;
    ptr->next = head;
    head = ptr;
    printf("\nNode inserted at beginning\n");
}

// 2. Insert at end
void endinsert() {
    struct node *ptr, *temp;
    int item;
    ptr = malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("\nMemory allocation failed\n");
        return;
    }
    printf("\nEnter value: ");
    scanf("%d", &item);
    ptr->data = item;
    ptr->next = NULL;

    if (head == NULL) {
        head = ptr;
    } else {
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = ptr;
    }
    printf("\nNode inserted at end\n");
}

// 3. Insert at specific index
void insertAtIndex() {
    struct node *ptr, *temp;
    int item, index, i = 0;
    ptr = malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("\nMemory allocation failed\n");
        return;
    }
    printf("\nEnter value: ");
    scanf("%d", &item);
    printf("Enter index (starting from 0): ");
    scanf("%d", &index);
    ptr->data = item;

    if (index == 0) {
        ptr->next = head;
        head = ptr;
    } else {
        temp = head;
        while (i < index - 1 && temp != NULL) {
            temp = temp->next;
            i++;
        }
        if (temp == NULL) {
            printf("\nIndex out of bounds\n");
            free(ptr);
            return;
        }
        ptr->next = temp->next;
        temp->next = ptr;
    }
    printf("\nNode inserted at index %d\n", index);
}

// Display linked list
void display()
{
    struct node *ptr;
    ptr = head;


    printf("\nprinting values . . . . .\n");
    while (ptr!=NULL)
    {
        printf("%d-> ",ptr->data);
        ptr = ptr -> next;
    }


}

// Main menu
int main() {
    int choice;
    while (1) {
        printf("\n\n********* Main Menu *********\n");
        printf("1. Insert in beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at index\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                beginsert();
                break;
            case 2:
                endinsert();
                break;
            case 3:
                insertAtIndex();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("\nPlease enter a valid choice\n");
        }
    }
    return 0;
}
