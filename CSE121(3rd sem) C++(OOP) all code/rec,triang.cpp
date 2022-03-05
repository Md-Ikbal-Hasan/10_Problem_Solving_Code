#include<iostream>
using namespace std;
class shape
{
     public:
    float d1,d2;

    void getdata()
    {
        cin >> d1,d2;
    }
    virtual float area()=0;
};
class triangle:public shape
{
    public:
    float area()
    {
        return 0.5*d1*d2;
    }

};

class rectangle :public shape
{
    public:
    float area()
    {
        return d1*d2;

    }
};
int main()
{
    triangle t;
    cout << "enter triangle length and height" << endl;
    t.getdata();
    cout << "area="<<t.area()<< endl;

    rectangle r;
    cout << "enter rectangle length and breadth" << endl;
    r.getdata();
    cout << "area="<<r.area()<< endl;

return 0;
}﻿
