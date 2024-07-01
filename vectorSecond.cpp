// Include Vector library for using vector
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> numbers{32, 12, 43, 44, 19};
    for (int *num : numbers)
    {
        cout << num << " ";
    }
    return 0;
}