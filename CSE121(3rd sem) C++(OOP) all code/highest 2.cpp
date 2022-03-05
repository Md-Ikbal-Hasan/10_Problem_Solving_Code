#include<iostream>
using namespace std;
int highest(int a,int b,int c)
{
    if(a>b && a>c)
        return a;
    else if(b>c && b>a)
        return b;
      else   if(c>a && c>b)
        return c;


}
float highest(float a,float b,float c)
{
    if(a>b && a>c)
        return a;
    else if(b>c && b>a)
        return b;
      else   if(c>a && c>b)
        return c;
}
int main()
{
    int x,y,z;
    float a,b,c;
    cout<<"enter total marks of three student:";
    cin>>x>>y>>z;
    cout<<"highest mark is: "<<highest(x,y,z)<<endl;
     cout<<"enter cgpa of three student:";
    cin>>a>>b>>c;
    cout<<"highest cgpa is: "<<highest(a,b,c);
    return 0;
}

