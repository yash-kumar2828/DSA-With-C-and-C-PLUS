#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter first number=";
    cin >> a;
    cout << "enter second number=";
    cin >> b;
    cout << "bitwise and operator value of " << a << " and " << b << " is " << (a & b) << endl;
    cout << "bitwise or operator value of " << a << " and " << b << " is " << (a | b) << endl;
    cout << "bitwise xor operator value of " << a << " and " << b << " is " << (a ^ b) << endl;
    cout << "bitwise left operator value of " << a << " and " << b << " is " << (a << b) << endl;
    cout << "bitwise right operator value of " << a << " and " << b << " is " << (a >> b) << endl;
    return 0;
}