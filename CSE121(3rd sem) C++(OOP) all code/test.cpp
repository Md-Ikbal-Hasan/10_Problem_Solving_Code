#include<iostream>
using namespace std;
class square
{
    int *length;
public:
    square(int l)
    {
        length=new int;
        *length=l;
        cout<<"constructing square"<<endl;
    }
~square(){
delete(length);
cout<<"Destructing square";
}
void show()
{
    cout<<*length<<endl;
}
void update(int l)
{
    *length=l;
}
};
void change(square *ob)
{
    int l;
    cin>>l;
    ob->update(l);
    ob->show();
}
int main()
{
    square ob1(20);
    ob1.show();
    change(&ob1);
    ob1.show();
    return 0;
}
