#include<iostream>
using namespace std;
highest(int a,int b,int c)
{
    if(a>b && a>c)
        cout<<"Highest mark is : "<<a;
    else if(b>c && b>a)
        cout<<"Highest mark is : "<<b;
      else   if(c>a && c>b)
        cout<<"Highest mark is : "<<c;
        else
            cout<<"marks are equal";
}
int main()
{
    int x,y,z;
    cout<<"enter total marks of three student:";
    cin>>x>>y>>z;
    highest(x,y,z);
    return 0;
}
