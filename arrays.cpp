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

    // Accessing the Elements of the array using [] operator
    //  access first array element
    cout << numbers[0] << endl; // returns 3

    // access second array element
    cout << numbers[1] << endl; // returns 2

    // Another way to access the element of the array is to use the at method which checks for out of bound error.
    cout << numbers.at(0) << endl; // returns 3
    cout << numbers.at(1) << endl; // returns 2
    // cout << numbers.at(10) << endl;  throws std::out_of_range exception

    // Using the empty and size method with array
    cout << "The size of array is: " << numbers.size() << '\n';

    if (numbers.empty())
    {
        cout << "The array is empty" << '\n';
    }
    else
    {
        cout << "The array is not empty" << '\n';
    }

    // fill the array with zeros
    numbers2.fill(0);

    cout << "The elements are: ";
    for (const int num : numbers2)
    {
        cout << num << " ";
    }
    return 0;
}