//return object
#include<iostream>
#include<cstring>
using namespace std;
class samp{
char s[50];
public:
    void show()
    {
        cout<<s<<endl;
    }
    void set(char *str)
    {
        strcpy(s,str);
    }
};
samp input()
{
    char s[80];
    samp str;
    cout<<"Enter string: ";
    cin>>s;
    str.set(s);
    return str;
}
int main()
{

    samp ob;
    ob=input();
    ob.show();
    return 0;
}
