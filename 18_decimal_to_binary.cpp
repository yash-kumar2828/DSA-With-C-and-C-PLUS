#include <iostream>
using namespace std;
int decToBinary(int num)
{
    int ans = 0, pow = 1;
    while (num > 0)
    {
        int res = num % 2;
        num = num / 2;
        ans = ans + (res * pow);
        pow = pow * 10;
    }
    return ans;
}
int main()
{
    int num;
    cout << "enter a number=";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        cout << "the binary number of " << i << " is=" << decToBinary(i) << endl;
    }
    return 0;
}