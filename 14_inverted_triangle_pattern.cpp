#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter no of row=";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}