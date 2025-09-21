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

// 4. Delete from head
void deleteHead() {
    if (head == NULL) {
        printf("\nList is empty, nothing to delete\n");
        return;
    }
    struct node *temp = head;
    head = head->next;
    printf("\nDeleted node with value %d from head\n", temp->data);
    free(temp);
}

// 5. Delete from end
void deleteEnd() {
    if (head == NULL) {
        printf("\nList is empty, nothing to delete\n");
        return;
    }
    struct node *temp = head, *prev = NULL;

    if (head->next == NULL) { // Only one node
        printf("\nDeleted node with value %d from end\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    printf("\nDeleted node with value %d from end\n", temp->data);
    prev->next = NULL;
    free(temp);
}

// 6. Delete from specific index
void deleteAtIndex() {
    if (head == NULL) {
        printf("\nList is empty, nothing to delete\n");
        return;
    }

    int index, i = 0;
    printf("Enter index (starting from 0): ");
    scanf("%d", &index);

    struct node *temp = head, *prev = NULL;

    if (index == 0) {
        head = head->next;
        printf("\nDeleted node with value %d from index 0\n", temp->data);
        free(temp);
        return;
    }

    while (i < index && temp != NULL) {
        prev = temp;
        temp = temp->next;
        i++;
    }

    if (temp == NULL) {
        printf("\nIndex out of bounds\n");
        return;
    }

    prev->next = temp->next;
    printf("\nDeleted node with value %d from index %d\n", temp->data, index);
    free(temp);
}

// Display linked list
void display() {
    struct node *ptr = head;
    if (ptr == NULL) {
        printf("\nList is empty\n");
        return;
    }

    printf("\nPrinting values...\n");
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

// Main menu
int main() {
    int choice;
    while (1) {
        printf("\n\n********* Main Menu *********\n");
        printf("1. Insert in beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at index\n");
        printf("4. Delete from head\n");
        printf("5. Delete from end\n");
        printf("6. Delete from index\n");
        printf("7. Display\n");
        printf("8. Exit\n");
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
                deleteHead();
                break;
            case 5:
                deleteEnd();
                break;
            case 6:
                deleteAtIndex();
                break;
            case 7:
                display();
                break;
            case 8:
                exit(0);
            default:
                printf("\nPlease enter a valid choice\n");
        }
    }
    return 0;
}

