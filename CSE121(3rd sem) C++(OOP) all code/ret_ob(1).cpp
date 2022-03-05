#include<iostream>
using namespace std;
class square{
    int length;
public:
    square(int l)
    {
        length=l;
        cout<<"constructing square"<<endl;   }
~square(){
cout<<"Destructing square"<<endl ;  }
void show()
{    cout<<length<<endl;   }

void update(int l)
{      length=l;   }      };
square change()
{
    int l;
    cout<<"Enter a length:"<<endl;
    cin>>l;
    square ob(l);
    ob.show();
    return ob;
}
int main()
{
    square ob1(20);
    ob1.show();
    ob1=change();
    ob1.show();
    return 0;       }

