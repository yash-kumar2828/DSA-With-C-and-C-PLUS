#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL, *temp, *newNode, *prev;
    int choice, value;

    do
    {
        printf("\nSingly Linked List Operations:\n");
        printf("1. Insert at end\n");
        printf("2. Delete by value\n");
        printf("3. Display list\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            // Insert at end
            newNode = (struct Node *)malloc(sizeof(struct Node));
            if (newNode == NULL)
            {
                printf("Memory allocation failed\n");
                continue;
            }
            printf("Enter value to insert: ");
            scanf("%d", &value);
            newNode->data = value;
            newNode->next = NULL;

            if (head == NULL)
            {
                head = newNode;
            }
            else
            {
                temp = head;
                while (temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
            printf("%d inserted.\n", value);
        }
        else if (choice == 2)
        {
            // Delete by value
            if (head == NULL)
            {
                printf("List is empty.\n");
                continue;
            }
            printf("Enter value to delete: ");
            scanf("%d", &value);

            temp = head;
            prev = NULL;

            while (temp != NULL && temp->data != value)
            {
                prev = temp;
                temp = temp->next;
            }

            if (temp == NULL)
            {
                printf("Value not found.\n");
            }
            else
            {
                if (prev == NULL)
                {
                    head = temp->next; // Delete head
                }
                else
                {
                    prev->next = temp->next;
                }
                free(temp);
                printf("Value %d deleted.\n", value);
            }
        }
        else if (choice == 3)
        {
            // Display list
            if (head == NULL)
            {
                printf("List is empty.\n");
            }
            else
            {
                temp = head;
                printf("Linked list: ");
                while (temp != NULL)
                {
                    printf("%d -> ", temp->data);
                    temp = temp->next;
                }
                printf("NULL\n");
            }
        }
        else if (choice == 4)
        {
            printf("Exiting...\n");
        }
        else
        {
            printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}
