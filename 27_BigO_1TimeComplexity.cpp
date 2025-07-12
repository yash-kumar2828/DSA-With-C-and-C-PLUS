#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number=";
    cin >> n;
    int ans = n * (n + 1) / 2;
    cout << "sum of 1 to " << n << " is " << ans;
    return 0;
}