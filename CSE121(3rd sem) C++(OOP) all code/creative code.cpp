#include<iostream>
using namespace std;
class A{
public:
    virtual void showA()
    {
        cout<<"38 intake! best of class";
    }
};
class C:public A{

};
class D:public A{

};
class E:public C,public D
{

};
int main()
{
    E ob;
    ob.showA();
    return 0;
}

