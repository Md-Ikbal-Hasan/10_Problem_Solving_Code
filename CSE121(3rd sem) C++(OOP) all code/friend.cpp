#include<iostream>
using namespace std;
class car;
class truck{
   int weight,speed;
public:
     truck(int w,int s)
     {
         weight=w;
         speed=s;
     }
   friend int sp_greater(car c,truck t);
};

class car{
   int passenger;
   int speed;
public:
     car(int p,int s)
     {
         passenger=p;
         speed=s;
     }

     friend int sp_greater(car c,truck t);
};

int sp_greater(car c,truck t)
{
    return c.speed - t.speed;
}

int main()
{
    int x;
    truck t1(2,120);
    car c1(6,55);
    x=sp_greater(c1,t1);

    if(x<0)
    {
        cout<<"truck is faster";
    }
    else if(x>0)
    {
        cout<<"car is faster";
    }
else
    cout<<"car and truck speed are equal";

    return 0;
}
