#include<iostream>
using namespace std;
class shop{
public:
    virtual void sell()=0;
};
class rice:public shop{
public:
    void sell()
    {
        cout<<"Rice sell"<<endl;
    }
};
class book:public shop{
public:
    void sell()
    {
        cout<<"Book sell"<<endl;
    }
};
int main()
{
    shop *p;
    rice s1;
    book s2;
    p=&s1;
    p->sell();
    p=&s2;
    p->sell();
    return 0;   }
