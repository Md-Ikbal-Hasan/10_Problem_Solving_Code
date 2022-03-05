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
    void get_xyz(int &a,int &b,  int &c)
    {
        a=x;
        b=y;
        c=z;
    }
   friend coord operator + (coord ob1,coord ob2);
   friend coord operator + (coord ob1,int i);
   friend coord operator + (int i,coord ob1);
   coord operator --();
   void operator --(int notued);
   bool operator == (coord ob2);
   bool operator > (coord ob2);
   bool operator < (coord ob2);
   bool operator >= (coord ob2);
   bool operator <= (coord ob2);

};

coord operator +(coord ob1,coord ob2)
{
    coord temp;
    temp.x=ob1.x+ob2.y;
    temp.y=ob1.y+ob2.y;
    temp.z=ob1.z+ob2.z;
    return temp;

}
coord operator + (coord ob1,int i)
{
    coord temp;
    temp.x=ob1.x+i;
    temp.y=ob1.y+i;
    temp.z=ob1.z+i;
    return temp;

}
coord operator + (int i,coord ob1)
{
    coord temp;
    temp.x=ob1.x+i;
    temp.y=ob1.y+i;
    temp.z=ob1.z+i;
    return temp;

}
coord coord::operator--()
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

    return(x*y*z<ob2.x*ob2.y*ob2.z);
}

bool coord :: operator<(coord ob2)
{

    return(x*y*z>ob2.x*ob2.y*ob2.z);
}

bool coord :: operator>=(coord ob2)
{

    return(x*y*z>=ob2.x*ob2.y*ob2.z);
}

bool coord :: operator<=(coord ob2)
{

    return(x*y*z<=ob2.x*ob2.y*ob2.z);
}





int main()
{
    coord p1(10,15,20),p2(5,10,15),p3;
    int x,y,z;
    p3=p1+p2;
    p3.get_xyz(x,y,z);
    cout<<x<<endl<<y<<endl<<z<<endl;

    p3=p1+20;
    p3.get_xyz(x,y,z);
    cout<<x<<endl<<y<<endl<<z<<endl;

    p3=15+p1;
    p3.get_xyz(x,y,z);
    cout<<x<<endl<<y<<endl<<z<<endl;

    --p3;
    p3.get_xyz(x,y,z);
    cout<<x<<endl<<y<<endl<<z<<endl;


    p3--;
    p3.get_xyz(x,y,z);
    cout<<x<<endl<<y<<endl<<z<<endl;


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
          cout<<"p1 is grater"<<endl;
         }
       else
         {
           cout<<"p2 is grater"<<endl;
          }

          if(p1<p2)
         {
          cout<<"p2 is less"<<endl;
         }
       else
         {
           cout<<"p1 is less"<<endl;
          }
          if(p1>=p2)
         {
          cout<<"p1 is grater or equal"<<endl;
         }
       else
         {
           cout<<"p2 is less"<<endl;
          }

          if(p1<=p2)
         {
          cout<<"p2 is grater or equal"<<endl;
         }
       else
         {
           cout<<"p1 is less"<<endl;
          }




}



