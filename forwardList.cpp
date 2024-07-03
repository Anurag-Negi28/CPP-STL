// C++ forward lists are sequence containers ordered in a strict linear sequence, where you can add or remove elements anywhere in the sequence with constant time efficiency.
// Elements in a forward list store information about their next element's location. Thus, they are more efficient in insertion, moving, and extracting elements compared to containers like array, vectors, etc.
// However, direct random access is not supported in forward lists.

#include <iostream>
#include <forward_list>
#include <iterator>

using namespace std;

int main()
{
    forward_list<int> numbers = {3, 4, 2, 1, 2, 9, 8, 3};
    cout << "Initial Forward List : ";
    for (int num : numbers)
    {
        cout << num << " ";
    }
    // Accesing the frot element of the list
    cout << "\nFirst Element : " << numbers.front();
    // Adding the element to the front
    numbers.push_front(2);
    // Declaring the iterator
    forward_list<int>::iterator itr;
    // Adding the elemnt after 3rd position
    itr = numbers.begin();
    advance(itr, 2);
    numbers.insert_after(itr, 3);
    // printing the list
    cout << "\nUpdated Forward List : ";
    for (int num : numbers)
    {
        cout << num << " ";
    }
}