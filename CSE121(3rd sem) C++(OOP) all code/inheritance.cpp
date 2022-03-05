#include<iostream>
using namespace std;
class base{
int x;
public:
    void setx(int m)
    {
        x=m;
    }
     void showx()
    {
        cout<<x<<endl;
    }
};


class derived:private base{
int y;
public:
    void setxy(int m,int n)
    {
        setx(m);
        y=n;
    }
    void showxy()
    {
        showx();
        cout<<y<<endl;
    }
    };
    int main()
    {
        derived ob;
        ob.setxy(10,20);

        ob.showxy();

        return 0;

    }
