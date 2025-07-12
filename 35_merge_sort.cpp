#include <stdio.h>

int main()
{
    int arr[100], temp[100], n;
    int i, width, left, mid, right;

    // Input
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Bottom-up merge sort
    for (width = 1; width < n; width *= 2)
    {
        for (left = 0; left < n; left += 2 * width)
        {
            mid = left + width;
            right = left + 2 * width;
            if (mid > n)
                mid = n;
            if (right > n)
                right = n;

            // Merge [left, mid) and [mid, right)
            int i = left, j = mid, k = left;
            while (i < mid && j < right)
            {
                if (arr[i] <= arr[j])
                {
                    temp[k++] = arr[i++];
                }
                else
                {
                    temp[k++] = arr[j++];
                }
            }
            while (i < mid)
                temp[k++] = arr[i++];
            while (j < right)
                temp[k++] = arr[j++];

            // Copy back to arr
            for (i = left; i < right; i++)
            {
                arr[i] = temp[i];
            }
        }
    }

    // Output
    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
