#include<iostream>
using namespace std;
class square
{
    int length;
public:
    square(int x)
    {
        length=x;
        cout <<"constructing";

    }
~square()
{
  cout<<"destructing"<<endl;
}
void show(){cout<<length<<endl;}
void update(int l)
{

    length=l;
}
};
void change(square object)
{
    int l;
    cin>>l;
    object.update(l);
    object.show();
}
int main()
{
    square ob1(20);
    ob1.show();
    change(ob1);

    ob1.show();
    return 0;
}

