#include <iostream>
using namespace std;
int binToDec(int binNum)
{
    int ans = 0, pow = 1;
    while (binNum > 0)
    {
        int rem = binNum % 10;
        ans += (rem * pow);
        binNum /= 10;
        pow *= 2;
    }
    return ans;
}
int main()
{
    int binNum;
    cout << "enter binary number=";
    cin >> binNum;
    cout << "the binary of " << binNum << "  to decimal form is " << binToDec(binNum) << endl;
    return 0;
}