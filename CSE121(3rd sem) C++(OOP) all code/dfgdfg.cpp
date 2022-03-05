#include<iostream>
using namespace std;
class coord
{
    int x,y,z;
public:
    coord(int a=0,int b=0,int c=0)
    {
        x=a;
        y=b;
        z=c;
    }
    void get_xyz(int &a,int &b,int &c)
    {
        a=x;
        b=y;
        c=z;
    }
    coord operator --();
    friend coord operator+(coord ob1,coord ob2);
    friend coord operator+(coord ob1,int i);
    friend coord operator+(int i,coord ob2);
    void operator --(int notused);
    bool operator==(coord ob2);
    bool operator >(coord ob2);
    bool operator <(coord ob2);
    bool operator >=(coord ob2);
    bool operator <=(coord ob2);
};
coord coord :: operator--()
{
    x--;
    y--;
    z--;
    return *this;
}
void coord::operator--(int notused)
{
    x--;
    y--;
    z--;
}
bool coord :: operator==(coord ob2)
{
    return(x==ob2.x && y==ob2.y && z==ob2.z);
}

bool coord :: operator>(coord ob2)
{
    return(x>ob2.x && y>ob2.y && z>ob2.z);
}

bool coord :: operator<(coord ob2)
{
    return(x<ob2.x && y<ob2.y && z<ob2.z);
}

bool coord :: operator>=(coord ob2)
{
    return(x>=ob2.x && y>=ob2.y && z>=ob2.z);
}

bool coord :: operator<=(coord ob2)
{
    return(x<=ob2.x && y<=ob2.y && z<=ob2.z);
}

coord operator+(coord ob1,coord ob2)
{
    coord temp;
    temp.x=ob1.x+ob2.x;
    temp.y=ob1.y+ob2.y;
    temp.z=ob1.z+ob2.z;
    return temp;
}
coord operator+(coord ob1, int i)
{
  coord temp;
  temp.x=ob1.x+i;
  temp.y=ob1.y+i;
  temp.z=ob1.z+i;
  return temp;
}
coord operator+(int i,coord ob1)
{
  coord temp;
  temp.x=ob1.x+i;
  temp.y=ob1.y+i;
  temp.z=ob1.z+i;
  return temp;
}
int main()
{
    coord p1(10,15,20),p2(10,15,20),p3;



    if(p1==p2)
    {
        cout<<"same points"<<endl;
    }
    else
    {
        cout<<"different points"<<endl;
    }

    if(p1>p2)
    {
        cout<<"p1 is greater"<<endl;
    }
    else
    {
        cout<<"p2 is greater "<<endl;
    }

    if(p1<p2)
    {
        cout<<"p1 is less than"<<endl;
    }
    else
    {
        cout<<"p2 is less than"<<endl;
    }

    if(p1>=p2)
    {
        cout<<"p1 is greater than or equal"<<endl;
    }
    else
    {
        cout<<"p2 is greater than or equal "<<endl;
    }

    if(p1<=p2)
    {
        cout<<"p1 is less than or equal"<<endl;
    }
    else
    {
        cout<<"p2 is less than or equal"<<endl;
    }

    return 0;
}



