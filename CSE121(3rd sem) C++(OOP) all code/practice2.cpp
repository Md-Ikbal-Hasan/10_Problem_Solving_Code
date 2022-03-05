#include<iostream>
using namespace std;
class myclass{
int a;
public:
    myclass(int s){a=s; cout<<a<<endl;}
    void set_a(int num){a=num;}
    int get_a(){return a;}
};

int main()
{
    myclass ob1(34),ob2(90);
    ob1.set_a(10);
    ob2.set_a(20);

    cout<<ob1.get_a()<<endl;
    cout<<ob2.get_a()<<endl;

    return 0;
}

