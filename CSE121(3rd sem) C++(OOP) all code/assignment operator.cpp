#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class strtype{
char *p;
public:
    strtype(char *s);
    ~strtype()
    {
        delete []p;
    }
    char *get()
    {
        return p;
    }
    strtype &operator=(strtype &o);
};
strtype::strtype(char *s )
{
    int l;
    l=strlen(s)+1;
    p=new char[1];
    if (!p)
    {
        cout<<"allocation error"<<endl;
        exit(1);
    }
 strcpy(p,s);
 //len=l;

}

strtype &strtype::operator=(strtype &o)
{
    int l;
    l=strlen(o.p)+1;
    p=new char[1];
    if(!p)
    {
        cout<<"Allocation error"<<endl;
        exit(1);
    }
    //l=o.1;
    strcpy(p,o.p);
    return *this;
}
int main()
{
    strtype a("Hello"),b("Victorians");
    cout<<a.get()<<" "<<b.get()<<endl;
    //a=b;
    //cout<<a.get()<<" "<<b.get()<<endl;
    return 0;
}
