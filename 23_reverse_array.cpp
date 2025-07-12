#include <iostream>
using namespace std;
void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
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
    cout << "here are the array=" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverse(arr, size);
    cout << "reverse array are=" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}