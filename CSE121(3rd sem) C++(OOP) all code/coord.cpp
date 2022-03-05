#include<iostream>
using namespace std;
class coord{
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
void operator--();
void operator--(int notused);
bool operator==(coord ob2);


friend coord operator+(coord ob1,coord ob2);
friend coord operator+(coord ob1,int i);
friend coord operator+(int i,coord ob1);


};

bool coord::operator==(coord ob2)
{
    return (x==ob2.x && y==ob2.y && z==ob2.z);
}

void coord::operator--(int notused)
{
    x--;
    y--;
    z--;

}

void coord::operator--()
{
    x--;
    y--;
    z--;

}

 coord operator+(coord ob1,coord ob2)
{
    coord temp;
    temp.x=ob1.x+ob2.x;
    temp.y=ob1.y+ob2.y;
    temp.z=ob1.z+ob2.z;
    return temp;
}
coord operator+(coord ob1,int i)
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
    int x,y,z;

    p3=p1+p2;
    cout<<"p1 + p2:"<<endl;
    p3.get_xyz(x,y,z);
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;

     p3=p1+20;
     cout<<"p1 + 20:"<<endl;
    p3.get_xyz(x,y,z);
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;

     p3=20+p2;
      cout<<"20 + p2:"<<endl;
    p3.get_xyz(x,y,z);
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;

     cout<<"after post and pre decrement:"<<endl;
    --p3;
     p3.get_xyz(x,y,z);
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;

     p3--;
     p3.get_xyz(x,y,z);
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
    cout<<"after comparing p1 and p2:"<<endl;
    if(p1==p2)
        cout<<"same points";
    else
        cout<<"different points";
    return 0;
}

