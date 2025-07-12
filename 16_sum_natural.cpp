#include <iostream>
using namespace std;
int sumN(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int num;
    cout << "enter a number=";
    cin >> num;
    cout << "the sum of 1 to " << num << " is " << sumN(num);
    return 0;
}