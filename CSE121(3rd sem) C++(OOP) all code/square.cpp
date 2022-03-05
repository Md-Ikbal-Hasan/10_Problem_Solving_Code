#include<iostream>
using namespace std;
class square
{
int *length;

public:

    square(int i)
    {
        length=new int;
        *length=a;
    }
    ~square()
    {
        free(length);
        cout<<"freeing...";
    }
   member_update()
    {
      *length=(*length) * (*length);
    }
    member_show()
    {
       cout<<*length<<endl;
    }

};
void non_member(square ob)
{
    cin>>ob;
    ob.member_update();
    ob.member_show();

}
void square_it(square ob)
{
    ob.update(100);
    ob.member_show();
}
int main()
{
    square ob(5);
    ob.member_show();
    ob.member_update();
    return 0;
}
