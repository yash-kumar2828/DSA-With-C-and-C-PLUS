#include <stdio.h>

int main()
{
    int queue[100], front = -1, rear = -1;
    int choice, value, i, n;

    printf("Enter maximum size of queue: ");
    scanf("%d", &n);

    do
    {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            if (rear == n - 1)
            {
                printf("Queue Overflow!\n");
            }
            else
            {
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                if (front == -1)
                    front = 0;
                rear++;
                queue[rear] = value;
                printf("%d enqueued to queue.\n", value);
            }
        }
        else if (choice == 2)
        {
            if (front == -1 || front > rear)
            {
                printf("Queue Underflow!\n");
            }
            else
            {
                printf("Dequeued element: %d\n", queue[front]);
                front++;
            }
        }
        else if (choice == 3)
        {
            if (front == -1 || front > rear)
            {
                printf("Queue is empty.\n");
            }
            else
            {
                printf("Queue elements:\n");
                for (i = front; i <= rear; i++)
                {
                    printf("%d ", queue[i]);
                }
                printf("\n");
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
