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
        printf("\nCircular Linked List Operations:\n");
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
                printf("Memory allocation failed.\n");
                continue;
            }

            printf("Enter value to insert: ");
            scanf("%d", &value);
            newNode->data = value;

            if (head == NULL)
            {
                head = newNode;
                newNode->next = head;
            }
            else
            {
                temp = head;
                while (temp->next != head)
                {
                    temp = temp->next;
                }
                temp->next = newNode;
                newNode->next = head;
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

            // Handle deletion of head node separately
            if (head->data == value)
            {
                if (head->next == head)
                {
                    free(head);
                    head = NULL;
                }
                else
                {
                    // Find last node to fix its next pointer
                    struct Node *last = head;
                    while (last->next != head)
                    {
                        last = last->next;
                    }
                    temp = head;
                    head = head->next;
                    last->next = head;
                    free(temp);
                }
                printf("Value %d deleted.\n", value);
            }
            else
            {
                prev = head;
                temp = head->next;
                while (temp != head && temp->data != value)
                {
                    prev = temp;
                    temp = temp->next;
                }

                if (temp == head)
                {
                    printf("Value not found.\n");
                }
                else
                {
                    prev->next = temp->next;
                    free(temp);
                    printf("Value %d deleted.\n", value);
                }
            }
        }
        else if (choice == 3)
        {
            // Display the list
            if (head == NULL)
            {
                printf("List is empty.\n");
            }
            else
            {
                printf("Circular Linked List: ");
                temp = head;
                do
                {
                    printf("%d -> ", temp->data);
                    temp = temp->next;
                } while (temp != head);
                printf("(back to head)\n");
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
