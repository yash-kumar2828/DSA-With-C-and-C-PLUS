#include <stdio.h>

int main()
{
    int arr[100], n, stack[100], top = -1;
    int i, low, high, pivot, temp, p, q;

    // Input the size of the array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Initialize stack with initial range
    stack[++top] = 0;
    stack[++top] = n - 1;

    // Iterative quick sort using manual stack
    while (top >= 0)
    {
        high = stack[top--];
        low = stack[top--];

        // Partitioning
        pivot = arr[high];
        p = low - 1;

        for (q = low; q < high; q++)
        {
            if (arr[q] <= pivot)
            {
                p++;
                temp = arr[p];
                arr[p] = arr[q];
                arr[q] = temp;
            }
        }

        temp = arr[p + 1];
        arr[p + 1] = arr[high];
        arr[high] = temp;

        int pi = p + 1;

        // Push left side to stack
        if (pi - 1 > low)
        {
            stack[++top] = low;
            stack[++top] = pi - 1;
        }

        // Push right side to stack
        if (pi + 1 < high)
        {
            stack[++top] = pi + 1;
            stack[++top] = high;
        }
    }

    // Output sorted array
    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
