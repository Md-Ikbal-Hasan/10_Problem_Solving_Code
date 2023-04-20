#include <bits/stdc++.h>
using namespace std;

class Room
{
private:
    double length;
    double height;
    double breadth;

public:
    void initData(double len, double brth, double hgt)
    {
        length = len;
        height = hgt;
        breadth = brth;
    }

    double calculateArea()
    {
        return length * breadth;
    }

    double calculateVolume()
    {
        return length * breadth * height;
    }
    void showVariable()
    {
        cout << length << " " << height << " " << breadth << endl;
    }
};

int main()
{
    // create object of Room class
    Room room1;

    // pass the values of private variables as arguments
    room1.initData(42.5, 30.8, 19.2);
    room1.showVariable();

    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}
