#include <stdio.h>

int main()
{
    int stack[100], top = -1;
    int choice, value, i, n;

    printf("Enter maximum size of stack: ");
    scanf("%d", &n);

    do
    {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            if (top == n - 1)
            {
                printf("Stack Overflow!\n");
            }
            else
            {
                printf("Enter value to push: ");
                scanf("%d", &value);
                top++;
                stack[top] = value;
                printf("%d pushed to stack.\n", value);
            }
        }
        else if (choice == 2)
        {
            if (top == -1)
            {
                printf("Stack Underflow!\n");
            }
            else
            {
                printf("Popped element: %d\n", stack[top]);
                top--;
            }
        }
        else if (choice == 3)
        {
            if (top == -1)
            {
                printf("Stack is empty.\n");
            }
            else
            {
                printf("Stack elements:\n");
                for (i = top; i >= 0; i--)
                {
                    printf("%d\n", stack[i]);
                }
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
