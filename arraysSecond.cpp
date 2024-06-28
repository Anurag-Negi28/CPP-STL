#include <iostream>
#include <algorithm>
#include <numeric>
#include <array>

using namespace std;

int main()
{
    array<int, 5> age = {45, 23, 66, 87, 21};

    // sorting
    sort(age.begin(), age.end());

    // print the sorted array
    cout << "The sorted array is: ";
    for (const int elt : age)
    {
        cout << elt << " ";
    }
    cout << endl;

    // searching
    // checking whether the number 5  exists or not
    auto found = find(age.begin(), age.end(), 5);

    if (found != age.end())
        cout << "5 was Found" << endl;
    else
        cout << "5 was Not Found" << endl;

    // summing
    int sum = accumulate(age.begin(), age.end(), 0);

    cout << "The sum of the element of array is : " << sum;
}