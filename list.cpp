// In C++, the STL list implements the doubly-linked list data structure. As a result, we can iterate both forward and backward.

#include <iostream>
#include <list>

using namespace std;

int main()
{
    // Declaring the list
    list<int> age = {45, 23, 66, 87, 21};
    // Displaying the list elements
    cout << "The initial list elements are: ";
    for (int i : age)
    {
        cout << i << " ";
    }
    // Adding elements to the list
    age.push_front(10);
    age.push_back(100);
    // Displaying the list elements
    cout << "\nThe updated list elements are: ";
    for (int i : age)
    {
        cout << i << " ";
    }
    // Accessing the elmements of the list
    cout << "\nThe first element of the list: " << age.front();
    cout << "\nThe last element of the list: " << age.back();
    // Removing elements from the list
    age.pop_front();
    age.pop_back();
    // Printing elements of the lift using ranged for loop
    cout << "\nThe final list elements are: ";
    for (int i : age)
    {
        cout << i << " ";
    }
    // Reversing the list
    age.reverse();
    // Printing elements of the lift using ranged for loop
    cout << "\nThe reversed list elements are: ";
    for (int i : age)
    {
        cout << i << " ";
    }
    // Sorting the list
    age.sort();
    // Printing elements of the lift using ranged for loop
    cout << "\nThe sorted list elements are: ";
    for (int i : age)
    {
        cout << i << " ";
    }
    // Printing the size of the list
    cout << "\nTh sixe of the list is: " << age.size();
    // Checking the list is empty or not
    if (age.empty())
        cout << "\nThe list is empty";
    else
        cout << "\nThe list is not empty";

    // Accesing the elements of the list using iterator
    list<int>::iterator it;
    cout << "\nThe list elements using iterator are: ";
    for (it = age.begin(); it != age.end(); ++it)
    {
        cout << *it << " ";
    }
    return 0;
}