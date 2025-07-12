#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec1;
    vector<int> vec2 = {1, 2, 3};

    cout << vec2[1] << endl;
    vector<int> vec3(7, 4);
    for (int i : vec3)
    {
        cout << i << endl;
    }
    return 0;
}