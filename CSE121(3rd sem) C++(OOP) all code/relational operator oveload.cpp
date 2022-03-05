#include<iostream>
using namespace std;
class coord{
int x,y;
public:
    coord()
    {
        x=0;
        y=0;
    }
    coord(int i,int j)
    {
        x=i;
        y=j;
    }
    void get_xy(int &i,int &j)
    {
        i=x;
        j=y;
    }
    int  operator==(coord ob2);
      int  operator&&(coord ob2);

};
int coord::operator==(coord ob2)
{
   return x==ob2.x && y==ob2.y;
}

int coord::operator&&(coord ob2)
{
   return (x&&ob2.x) && (y&&ob2.y);
}
int main()
{

    coord ob1(10,10),ob2(5,3),ob3(10,10),ob4(0,0);

   if(ob1==ob2)
   cout<<"ob1 same as ob2"<<endl;
   else
    cout<<"ob1 and ob2 differ"<<endl;

    if(ob1==ob3)
   cout<<"ob1 same as ob3"<<endl;
   else
    cout<<"ob1 and ob3 differ"<<endl;

     if(ob1&&ob2)
   cout<<"ob1 && ob2 are same"<<endl;
   else
    cout<<"ob1 && ob2 differ"<<endl;

     if(ob1&&ob3)
   cout<<"ob1 && ob3 same"<<endl;
   else
    cout<<"ob1 && ob3 differ"<<endl;

    return 0;

}

