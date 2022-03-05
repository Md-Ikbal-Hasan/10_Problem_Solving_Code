#include<iostream>
using namespace std;

class coord
{
    int x,y;
public:

    coord(int i=0,int j=0)
    {
        x=i;
        y=j;
    }
    void getxy(int &i,int &j)
    {
        i=x;
        j=y;
    }
    coord operator+(coord ob2);
    coord operator+(int ob2);
    coord operator++();

};

coord coord :: operator+(coord ob2)
{
    coord temp;
    temp.x=x+ob2.x;
    temp.y=y+ob2.y;
    return temp;
}

coord coord :: operator+(int  i)
{
    coord temp;
    temp.x=x+i;
    temp.y=y+i;
    return temp;
}


coord coord :: operator++()
{
    x++;
    y++;
    return *this;
}

int main()
{
   coord o1(10,20),o2(5,4),o3;
   int x,y;
   o3=o1+o2;
   o3.getxy(x,y);
   cout<<x<<endl<<y<<endl;

   (o1+100).getxy(x,y);
    cout<<x<<endl<<y<<endl;
   //o1++.getxy(x,y);
    //cout<<x<<endl<<y<<endl;
    //++o1.getxy(x,y);
     //cout<<x<<endl<<y<<endl;


return 0;
}

