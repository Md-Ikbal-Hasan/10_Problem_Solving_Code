#include<iostream>
using namespace std;

class ractangle{
    int a,b;
public:
    ractangle()
    {
        int x = 10, y = 15;

        a = x;
        b = y;

    }

    ractangle(int y)
    {
        a = 15;
        b = y;
    }

    ractangle(double y)
    {
        b = 10;
        a = y;
    }


    ractangle (int x, int y)
    {
        a = x;
        b = y;

    }

    double area()
    {
        cout<<"The area is = " << a*b <<endl;
    }
};

int main()
{
    ractangle ob11(10,15),ob12(10),ob13(15.0),ob[10];
    ob11.area();
    ob12.area();
    ob13.area();
    for(int i=0; i<10; i++)
    {
        ob[i].area();
    }

    return 0;
}

