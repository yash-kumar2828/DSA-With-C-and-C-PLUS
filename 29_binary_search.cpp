#include <iostream>
using namespace std;
int binary(int arr[], int target, int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    int size;
    int arr[100];
    int search;
    cout << "enter size of array=";
    cin >> size;
    cout << "enter the value of array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "here are this array=" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "enter the value to be search=";
    cin >> search;
    int result = binary(arr, search, size);
    if (result != -1)
    {
        cout << "item found at index " << result;
    }
    if (result == -1)
    {
        cout << "item not found";
    }
    return 0;
}