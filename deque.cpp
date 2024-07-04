// In C++, the STL deque is a sequential container that provides the functionality of a double-ended queue data structure.
// In a regular queue, elements are added from the rear and removed from the front. However, in a deque, we can insert and remove elements from both the front and rear.
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> numbers{1, 2, 3, 4, 5};
    // Displaying the deque
    cout << "Deque :";
    for (int num : numbers)
    {
        cout << num << " ";
    }
    // Fill constructor
    deque<int> numb(6, 2);
    // Displaying the deque
    cout << "\nDeque :";
    for (int num : numb)
    {
        cout << num << " ";
    }
    // Declaring the deque using another queue
    deque<int> n(numbers.begin(), numbers.end());
    // Displaying the deque
    cout << "\nDeque :";
    for (int num : n)
    {
        cout << num << " ";
    }
    // Addding elements to the front of the queue
    numbers.push_front(2);
    // Adding elements to the back of the deque
    numbers.push_back(9);
    // Printing the updated queue
    cout << "\nUpdated deque";
    for (int num : numbers)
    {
        cout << num << " ";
    }
    // Accesing the elemnts
    cout << "\nFront element: " << numbers.front() << endl;
    cout << "Back element: " << numbers.back() << endl;
    cout << "Element at index 1: " << numbers.at(1) << endl;
    cout << "Element at index 0: " << numbers[0];
    // change elements at the index
    numbers.at(0) = 3;
    numbers.at(1) = 4;

    cout << "\nUpdated Deque: ";

    for (const int &num : numbers)
    {
        cout << num << " ";
    }
    // Deleting elemnts of the deque from the front
    numbers.pop_front();
    // Deleting elements from the back
    numbers.pop_back();
    // Display the updated deque
    cout << "\nUpdated Deque :";
    for (int num : numbers)
    {
        cout << num << " ";
    }
    // Accessing the elements of the deque using the iterators
    deque<int>::iterator itr;
    cout << "\nDeque :";
    for (itr = numbers.begin(); itr != numbers.end(); ++itr)
    {
        cout << *itr << " ";
    }
    // Accesing the third element
    itr = numbers.begin() + 2;
    cout << "\nThird element :" << *itr;
}
