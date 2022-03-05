#include<iostream>
using namespace std;
class A
{
    public:
    void showA()
    {
         cout<<"35 intake!best of luck"<<endl;
    }
};
class B:virtual public A
{
};
class C:virtual public A
{
};
class D: public B,public C
{

};
int main()
{
    D ob2;
    ob2.showA();
    return 0;
}
