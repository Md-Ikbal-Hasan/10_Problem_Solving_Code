#include <iostream>
using namespace std;

class Student
{
private:
    int abc = 56;

public:
    int roll;
    float marks;

    void showDetails()
    {
        cout << "roll: " << roll << " marks:" << marks << " abc: " << abc << endl;
    }
};

int main()
{
    Student std1;
    std1.roll = 101;
    std1.marks = 86;

    std1.showDetails();

    return 0;
}