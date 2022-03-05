#include<iostream>
using namespace std;
class Shape{
    public:
    double a,b;
    public:
    double setdata(double x,double y){
    a=x;
    b=y;
    }

   virtual void display_area()=0;
};
class Triangle:public Shape{
double Tarea;
public:
    void Triangle_area(){
    Tarea=a*b/2;
    }
    void display_area(){
    cout<<"Triangle area is:"<<Tarea<<endl;
    }
};
class Rectangle:public Shape{
double Rarea;
public:
    void Rectangle_area(){
    Rarea=a*b;
    }
    void display_area(){
    cout<<"Rectangle area is:"<<Rarea<<endl;
    }
};
int main(){
Shape *p;
Triangle ob1;
Rectangle ob2;
ob1.setdata(5,6);
ob1.Triangle_area();
p=&ob1;
p->display_area();
ob2.setdata(5,6);
ob2.Rectangle_area();
p=&ob2;
p->display_area();
return 0;
}

