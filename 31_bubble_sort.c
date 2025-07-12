#include <stdio.h>
int main()
{
    int n, arr[n], i, j, temp;
    printf("enter array size=");
    scanf("%d", &n);
    printf("enter the value in array=\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("without sorted array in array=\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (i = n; i > 0; i--)
    {
        for (j = 0; j < i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nsoretd result\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}