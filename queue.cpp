// In C++, the STL queue provides the functionality of a queue data structure.
// The queue data structure follows the FIFO (First In First Out) principle where elements that are added first will be removed first.

#include <iostream>
#include <queue>

using namespace std;

void displayQueue(queue<string> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ,";
        q.pop();
    }
}

void checkEmpty(queue<string> q)
{
    if (q.empty())
        cout << "\nQueue is empty";
    else
        cout << "\nQueue is not empty";
}

int main()
{
    queue<string> subjects;
    subjects.push("Maths");
    subjects.push("English");
    subjects.push("Science");
    subjects.push("Social Studies");
    subjects.push("Computer Science");
    // Displaying the queue
    cout << "Initial Queue elements are: ";
    displayQueue(subjects);
    // Performing the pop operation
    subjects.pop();
    cout << "\nQueue elements after removing the first element: ";
    displayQueue(subjects);
    // Accesing thr firts element of the queue
    cout << "\nFirst element of the queue is: " << subjects.front();
    // Accesing the alst element of the queue
    cout << "\nLast element of the queue is: " << subjects.back();
    // Printing the size of the queeu
    cout << "\nSize of the queue is: " << subjects.size();
    // Checking if the elements of the queue is empty or not
    checkEmpty(subjects);
}
