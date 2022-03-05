// C++ program to demonstrate iterators

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Declaring a vector
    vector<int> v;
    for(int i=1 ; i<=3 ; i++)
        v.push_back(i);
    // Declaring an iterator
    vector<int>::iterator i;

    int j;

    // Inserting element using iterators
    for (i = v.begin(); i != v.end(); ++i)
    {
        if (i == v.begin())
        {
            i = v.insert(i, 5);
            // inserting 5 at the beginning of v
        }
    }

    // v contains 5 1 2 3

    v.insert(v.begin() + 2 , 12); // inserting 12 at index 2
    v.push_back(45);
    cout<<"after adding : ";
    for (i = v.begin(); i != v.end(); ++i)
    {
        cout << *i << " ";
    }
    cout<<endl;

    for (i = v.begin(); i != v.end() - 2; i = i +1)
    {
        cout << *i << " ";
    }


    // Deleting a element using iterators
    for (i = v.begin(); i != v.end(); ++i)
    {
        if (i == v.begin() + 1)
        {
            i = v.erase(i);
            // i now points to the element after the
            // deleted element
        }
    }


    // Accessing the elements using iterators
    cout<<endl<<"after deleting :";
    for (i = v.begin(); i != v.end(); ++i)
    {
        cout << *i << " ";
    }

    return 0;
}
