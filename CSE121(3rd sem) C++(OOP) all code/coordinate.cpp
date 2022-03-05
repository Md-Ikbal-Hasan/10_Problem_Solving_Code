#include<iostream>
using namespace std;
class Coord{
int x,y;
public:
    Coord(int i=0,int j=0)
    {
        x=i;
        y=j;
    }
    void get_xy(int &i,int &j)
    {
        i=x;
        j=y;
    }
    Coord operator+(Coord ob2);
};
Coord Coord::operator+(Coord ob2)
{
    Coord temp;
    temp.x=x+ob2.x;
    temp.y=y+ob2.y;
    return temp;
}
int main()
{
    Coord ob1(10,10),ob2(5,3),ob3;
    int x,y;
    ob3=ob1+ob2;

    ob3.get_xy(x,y);
    cout<<"x:"<<x<<" "<<"y:"<<y<<endl;
    cout<<"x:"<<x<<" "<<"y:"<<y<<endl;
    return 0;
}
