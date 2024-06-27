/*Vectors are dynamic arrays in cpp which are used using the vector library of STL*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Declaring a vector
    vector<int> numbers{3, 2, 20, 4, 9, 6};

    // Declaring iterator to print the first elemnet of the vector
    vector<int>::iterator it = numbers.begin();
    cout << "First Element: " << *it << endl;

    // change iterator to point to the last element
    it = numbers.end() - 1;
    cout << "Last Element: " << *it << endl;

    // Printing the vector
    for (int number : numbers)
    {
        cout << number << " ";
    }
    return 0;
}