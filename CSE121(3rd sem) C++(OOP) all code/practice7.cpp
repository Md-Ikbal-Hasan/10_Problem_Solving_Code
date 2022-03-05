#include<iostream>
using namespace std;
class Rect
{
int h,w;
public:
    Rect()
    {
        cout<<"Enter height and width: ";
        cin>>h>>w;
    }
    area()
    {
        cout<<"value is:";
    cout<<h<<" "<<w<<endl;
        cout<<h*w<<endl;
    }
    void show()
    {
        cout<<"value is:";
    cout<<h<<" "<<w;
    }
};
int main()
{


Rect ob;


ob.area();
ob.show();

return 0;
}

