/*Vectors are dynamic arrays in cpp which are used using the vector library of STL*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Declaring a vector
    vector<int> numbers{1, 2, 3, 4, 5, 6};

    // Printing the vector
    for (int number : numbers)
    {
        cout << number << " ";
    }
    return 0;
}