#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec1;
    cout << "size of vector=" << vec1.size() << endl;
    cout << "capacity of vector=" << vec1.capacity() << endl;
    vec1.push_back(7);
    vec1.push_back(4);
    vec1.push_back(11);
    cout << "after push back size of vector=" << vec1.size() << endl;
    cout << "after push back capacity of vector=" << vec1.capacity() << endl;
    vec1.pop_back();
    cout << "after pop back size of vector=" << vec1.size() << endl;
    cout << "after pop back capacity of vector=" << vec1.capacity() << endl;
    cout << "frontend value=" << vec1.front() << endl;
    cout << "back value=" << vec1.front() << endl;
    cout << "the index of the  value is=" << vec1.at(1) << endl;
    cout << "for loop value" << endl;
    for (int i : vec1)
    {
        cout << i << endl;
    }
    return 0;
}