// C++ arrays is a fixed size container that holds elements of the same type.

#include <iostream>
#include <array>

using namespace std;

int main()
{
    // Declaring an array Method 1-Initiliazer list
    array<int, 5> numbers = {3, 2, 20, 4, 9};

    // Method 2-uniform initialization
    array<int, 5> numbers2{32, 21, 20, 44, 19};

    cout << "Firts array" << endl;

    // Printing the array elements using ranged based for loop
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    cout << "Second array" << endl;
    for (int num : numbers2)
    {
        cout << num << " ";
    }

    return 0;
}