// Include Vector library for using vector
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> numbers{32, 12, 43, 44, 19};
    cout << "Unchanged Vector:";
    for (int num : numbers)
    {
        cout << num << " ";
    }

    // Adding elements to the vector, Push_back() is used to add elements to the end of the vector
    numbers.push_back(40);
    numbers.push_back(14);
    numbers.emplace_back(50); // emplace_back() is used to add elements to the end of the vector

    cout << "\nUpdated Vector:";
    for (int num : numbers)
    {
        cout << num << " ";
    }

    // using at() funtction to access elements,[] operator can also be used to acces elements but it does not provides exception for out of bound error
    cout << "\nElement at index 2: " << numbers.at(2);
    cout << "\nElement at index 5: " << numbers.at(5);

    // Deleting elements from the vector, pop_back() is used to delete elements at the last
    numbers.pop_back();

    cout << "\nUpdated Vector:";
    for (int num : numbers)
    {
        cout << num << " ";
    }

    cout << "\nSize of Vector:" << numbers.size(); // returns the size of the vector

    // Accessing elemnts using iteratot
    vector<int>::iterator it;

    // Accessing the firts elemst
    it = numbers.begin();
    cout << "\nFirts Element:" << *it;
    // Accessing the last element
    it = numbers.end() - 1;
    cout << "\nLast Elements:" << *it << endl;

    // Iterate through the vector using the iterator
    for (it = numbers.begin(); it != numbers.end(); ++it)
    {
        cout << *it << "  ";
    }
    return 0;
}