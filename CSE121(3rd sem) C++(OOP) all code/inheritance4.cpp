#include<iostream>
using namespace std;
class base{
int i;
public:
    base(int n)
    {
        cout<<"constucting base class"<<endl;
        i=n;

    }
    ~base()
    {
        cout<<"destructing base class"<<endl;
    }
    void showi()
    {
        cout<<i<<endl;
    }

};

class derived:public base{
int j;
public:
derived(int m,int k):base(k)
{
     cout<<"constucting derived  class"<<endl;
     j=m;
}
~derived ()
{
    cout<<"destructing derived class"<<endl;
}
void showj()
{
    cout<<j<<endl;
}

};
int main()
{
    derived ob(10,30);
    ob.showi();
    ob.showj();
    return 0;
}
