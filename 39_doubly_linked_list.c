#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL, *tail = NULL, *temp, *newNode;
    int choice, value;

    do
    {
        printf("\nDoubly Linked List Operations:\n");
        printf("1. Insert at end\n");
        printf("2. Delete by value\n");
        printf("3. Display forward\n");
        printf("4. Display backward\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            // Insert at end
            newNode = (struct Node *)malloc(sizeof(struct Node));
            if (newNode == NULL)
            {
                printf("Memory allocation failed.\n");
                continue;
            }

            printf("Enter value to insert: ");
            scanf("%d", &value);
            newNode->data = value;
            newNode->next = NULL;
            newNode->prev = NULL;

            if (head == NULL)
            {
                head = tail = newNode;
            }
            else
            {
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
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
            while (temp != NULL && temp->data != value)
            {
                temp = temp->next;
            }

            if (temp == NULL)
            {
                printf("Value not found.\n");
            }
            else
            {
                if (temp == head && temp == tail)
                {
                    head = tail = NULL;
                }
                else if (temp == head)
                {
                    head = head->next;
                    head->prev = NULL;
                }
                else if (temp == tail)
                {
                    tail = tail->prev;
                    tail->next = NULL;
                }
                else
                {
                    temp->prev->next = temp->next;
                    temp->next->prev = temp->prev;
                }
                free(temp);
                printf("Value %d deleted.\n", value);
            }
        }
        else if (choice == 3)
        {
            // Display forward
            if (head == NULL)
            {
                printf("List is empty.\n");
            }
            else
            {
                printf("Forward list: ");
                temp = head;
                while (temp != NULL)
                {
                    printf("%d <-> ", temp->data);
                    temp = temp->next;
                }
                printf("NULL\n");
            }
        }
        else if (choice == 4)
        {
            // Display backward
            if (tail == NULL)
            {
                printf("List is empty.\n");
            }
            else
            {
                printf("Backward list: ");
                temp = tail;
                while (temp != NULL)
                {
                    printf("%d <-> ", temp->data);
                    temp = temp->prev;
                }
                printf("NULL\n");
            }
        }
        else if (choice == 5)
        {
            printf("Exiting...\n");
        }
        else
        {
            printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}
