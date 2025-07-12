#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter a character=";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "it is a lower case";
    }
    else
    {
        cout << "it is a upper case";
    }
    return 0;
}