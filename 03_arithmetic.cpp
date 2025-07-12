#include <iostream>
using namespace std;
int main()
{
    int n1, n2, choice;
    cout << "enter first number=";
    cin >> n1;
    cout << "enter second number=";
    cin >> n2;
    cout << "choices are \n1.addition \n2.subtraction \n3.multiplication \n4.division \n5.modulus" << endl;
    cout << "enter your choice=";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "addition is " << n1 + n2;
        break;
    case 2:
        cout << "subtraction is " << n1 - n2;
        break;
    case 3:
        cout << "multiplication is " << n1 * n2;
        break;
    case 4:
        cout << "division is " << n1 / n2;
        break;
    case 5:
        cout << "modulus is " << n1 % n2;
        break;
    default:
        cout << "invalid choice";
    }
    return 0;
}
