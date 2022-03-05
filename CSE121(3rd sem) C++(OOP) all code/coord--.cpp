#include<iostream>
using namespace std;
class Coord{
float x;
float y;
public:
    Coord(float i=0,float j=0)
    {
        x=i;
        y=j;
    }
    void get_xy(float &i,float &j)
    {
        i=x;
        j=y;
    }
    Coord operator/(Coord ob2);
};
Coord Coord::operator/(Coord ob2)
{
    Coord temp;
    temp.x=x/ob2.x;
    temp.y=y/ob2.y;
    return temp;
}
int main()
{
    Coord ob1(17,15),ob2(5,3),ob3;
    float x;
    float y;
    ob3=ob1/ob2;
    ob3.get_xy(x,y);
    cout<<"x:"<<x<<" "<<"y:"<<y<<endl;
    return 0;
}

