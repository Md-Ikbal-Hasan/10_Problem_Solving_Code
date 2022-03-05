#include<iostream>
#include<cstring>
using namespace std;
class mybase{
char str[80];
public:
    mybase(char *p)
    {
       strcpy(str,p);
    }

  char *get(){return str;}

};

class myderived:public mybase{
int len;
public:
    myderived(char *t): mybase(t)
    {
    cout<<"constructing derived class"<<endl;
    }

};
int main()
{
    myderived ob("hello");
    ob.get();

    return 0;
}

