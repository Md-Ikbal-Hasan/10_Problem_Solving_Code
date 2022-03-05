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
bool operator==(coord ob2);


bool operator>(coord ob2);
bool operator<(coord ob4);

};

bool coord::operator==(coord ob2)
{
    return (x==ob2.x && y==ob2.y && z==ob2.z);
}

bool coord::operator>(coord ob2)
{
return (x*y*z>ob2.x*ob2.y*ob2.z);
}

bool coord::operator<(coord ob4)
{
return (x*y*z < ob4.x*ob4.y*ob4.z);
}

int main()
{
    coord p1(10,15,20),p2(5,10,5),p3(1,2,4),p4(3,2,4);

    if(p1==p2)
        cout<<"same points"<<endl;
    else
        cout<<"different points"<<endl;

    if(p1>p2)
        cout<<"p1 is greater"<<endl;
    else
        cout<<"p1 is less than"<<endl;



        if(p3<p4)
        cout<<"p3 is less than from p4"<<endl;
    else
        cout<<"p3 is greater than p4"<<endl;





    return 0;
}


